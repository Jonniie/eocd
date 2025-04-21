function find_rounds(nums) {
  let res = [];
  let count = 0;

  let curr = 0;
  while (count < nums.length) {
    let temp = [];
    for (let i = 0; i < nums.length; i++) {
      if (nums[i] == curr + 1) {
        temp.push(nums[i]);
        curr = nums[i];
        count++;
      }
    }
    res.push(temp);
  }

  return res;
}

console.log(find_rounds([1, 2, 3, 4]));
// // [[1, 2, 3, 4]]

console.log(find_rounds([1, 3, 2, 4]));
// // [[1, 2], [3, 4]]

console.log(find_rounds([4, 3, 2, 1]));
// // [[1], [2], [3], [4]]

console.log(find_rounds([1]));
// // [[1]]

console.log(find_rounds([2, 1, 4, 7, 5, 3, 6, 8]));
// [[1], [2, 3], [4, 5, 6], [7, 8]]
