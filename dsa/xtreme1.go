package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	in := bufio.NewReaderSize(os.Stdin, 1<<20)
	out := bufio.NewWriterSize(os.Stdout, 1<<20)
	defer out.Flush()

	var T int
	fmt.Fscan(in, &T)
	for ; T > 0; T-- {
		var s string
		fmt.Fscan(in, &s)

		queues := make([][]int, 6)
		head := make([]int, 6)
		sequences := make([][]int, 0, len(s)/6)

		for i := 0; i < len(s); i++ {
			ch := s[i]
			switch ch {
			case '1':
				if head[4] < len(queues[4]) {
					id := queues[4][head[4]]
					head[4]++
					sequences[id] = append(sequences[id], i+1)
					queues[5] = append(queues[5], id)
				} else if head[1] < len(queues[1]) {
					id := queues[1][head[1]]
					head[1]++
					sequences[id] = append(sequences[id], i+1)
					queues[2] = append(queues[2], id)
				} else {
					id := len(sequences)
					sequences = append(sequences, []int{i + 1})
					queues[1] = append(queues[1], id)
				}
			case '2':
				// First feed sequences that still need the mid '2' (state 2), then finishing ones (state 5)
				if head[2] < len(queues[2]) {
					id := queues[2][head[2]]
					head[2]++
					sequences[id] = append(sequences[id], i+1)
					queues[3] = append(queues[3], id)
				} else if head[5] < len(queues[5]) {
					id := queues[5][head[5]]
					head[5]++
					sequences[id] = append(sequences[id], i+1)
				}
			case '0':
				if head[3] < len(queues[3]) {
					id := queues[3][head[3]]
					head[3]++
					sequences[id] = append(sequences[id], i+1)
					queues[4] = append(queues[4], id)
				}
			}
		}

		for _, seq := range sequences {
			if len(seq) == 6 {
				for j, idx := range seq {
					if j > 0 {
						fmt.Fprint(out, " ")
					}
					fmt.Fprint(out, idx)
				}
				fmt.Fprintln(out)
			}
		}
	}
}
