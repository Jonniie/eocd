def find_rounds(numbers):
    res = [];
    count = 0;

    curr = 0;

    while count < len(numbers):
        temp = [];
        for num in numbers:
            if num == curr+1:
                temp.append(num);
                curr = num;
                count += 1;

        res.append(temp)
    
    return res


if __name__ == "__main__":
    print(find_rounds([1, 2, 3, 4]))
    # [[1, 2, 3, 4]]

    print(find_rounds([1, 3, 2, 4]))
    # [[1, 2], [3, 4]]    

    print(find_rounds([4, 3, 2, 1]))
    # [[1], [2], [3], [4]]
    
    print(find_rounds([1]))
    # [[1]]

    print(find_rounds([2, 1, 4, 7, 5, 3, 6, 8]))
    # [[1], [2, 3], [4, 5, 6], [7, 8]]