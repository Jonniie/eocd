function fastrounds(nums) {
  const pos = new Array(nums.length + 1);
  for (let i = 0; i < nums.length; i++) {
    pos[nums[i]] = i;
  }

  console.log(pos);

  let rounds = 1;
  for (let i = 1; i < nums.length; i++) {
    if (pos[i + 1] < pos[i]) {
      rounds++;
    }
  }

  return rounds;
}

// console.log(fastrounds([1, 2, 3, 4]));
// // // [[1, 2, 3, 4]]

// console.log(fastrounds([1, 3, 2, 4]));
// // // // // [[1, 2], [3, 4]]

// console.log(fastrounds([4, 3, 2, 1]));
// // // // [[1], [2], [3], [4]]

// console.log(fastrounds([1]));
// // // [[1]]

// console.log(fastrounds([2, 1, 4, 7, 5, 3, 6, 8]));
// 1 2 3 4 5 6 7 8
// [[1], [2, 3], [4, 5, 6], [7, 8]]

console.log(fastrounds([2, 5, 4, 1, 3]));
