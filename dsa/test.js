function bucket_list(input) {
  input.sort((a, b) => a[0] - b[0]);
  console.log(input);

  let milked = new Set();
  let intersect = [];
  for (let i = 0; i < input.length; i++) {
    for (let j = i + 1; j < input.length; j++) {
      if (input[i][1] > input[j][0] && input[j][1] > input[i][1]) {
        intersect.push([input[i], input[j]]);
      }
    }
  }

  console.log(intersect);
}

let arr = [
  [4, 10, 1],
  [8, 13, 3],
  [2, 6, 2],
];
console.log(bucket_list(arr));
