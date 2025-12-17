const fs = require("fs");

function solve(input) {
  let arr = input.split("\n");
  let res = 0;
  let curr = 50;
  for (let el of arr) {
    if (el[0] == "R") {
      curr += +el.slice(1);
      while (curr > 99) {
        curr -= 99 + 1;
        if (curr != 0) res++;
      }
    }

    if (el[0] == "L") {
      curr -= +el.slice(1);
      while (curr < 0) {
        curr += 99 + 1;

        if (curr + +el.slice(1) - 1 != 99) {
          res++;
        }
      }
    }

    if (curr == 0) res++;
  }

  return res;
}

fs.readFile("/home/j3ech/Documents/eocd/AoC/day1.txt", (err, data) => {
  if (err) throw err;

  const d = data.toString();
  let res = solve(d);
  console.log(res);
});

const input1 = `L68
L30
R48
L5
R60
L55
L1
L99
R14
L82`;

// console.log(solve(input1));
