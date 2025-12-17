function solve(input) {
  const arr = input.trim().split("\n");
  let op = arr
    .at(-1)
    .split(" ")
    .filter((el) => el != "");

  let res = new Array(op.length).fill(0);

  for (let i = 0; i < arr.length - 1; i++) {
    let curr_row = arr[i].split(" ");
    console.log(curr_row);

    let actual_arr = [];
    let temp = "";

    for (let idx = 0; idx < curr_row.length; idx++) {
      if (curr_row[idx] == "") {
        temp += "0";
      } else {
        temp += curr_row[idx];
        actual_arr.push(temp);
        temp = "";
      }
    }

    console.log(actual_arr);

    let new_temp = 0;

    let op_num_arr = new Array(op.length).fill("");

    // console.log(op_num_arr);
  }

  let final_result = res.reduce((a, b) => a + b, 0);

  return final_result;
}

fs.readFile("/home/j3ech/Documents/eocd/AoC/day6.txt", (err, data) => {
  if (err) throw err;

  const d = data.toString();

  //   let res = solve(d);
  //   console.log(res);
});

const input = `123 328  51 64 
 45 64  387 23 
  6 98  215 314
*   +   *   + `;
console.log(solve(input));
