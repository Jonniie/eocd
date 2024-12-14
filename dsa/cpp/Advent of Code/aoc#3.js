const fs = require("fs");

function readFile(filePath) {
  try {
    const data = fs.readFileSync(filePath);
    return data.toString();
  } catch (error) {
    console.error(`Got an error trying to read the file: ${error.message}`);
  }
}

const aoc = readFile("./Advent of Code/aoc#3.txt");
let str = aoc.replace(/\s/g, "");
// let str =
//   "xmul(2,4)&mul[3,7]!^don't()_mul(5,5)+mul(32,64](mul(11,8)undo()?mul(8,5))";

console.log(aoc);

let sum = 0;

// let str_arr = str.split("mul(");
// for (let i = 0; i < str_arr.length; i++) {
//   let cutt_str = str_arr[i];
//   if (parseInt(cutt_str)) {
//     let first_no = parseInt(cutt_str);
//     let arr_2 = cutt_str.split(",");

//     if (arr_2.length < 2) {
//       continue;
//     }
//     let arr_3 = arr_2[1].split(")");
//     let second_no = arr_3.at(0);
//     if (+first_no && +second_no) {
//       console.log(first_no, second_no);
//       sum += +first_no * +second_no;
//     }
//   }
// }
const pattern =
  /(?:do\(\)|don\'t\(\))?(?:.*?\s*)?mul\(\s*(\d+)\s*,\s*(\d+)\s*\)/g;

const matches = str.matchAll(pattern);
let state = true;
for (const match of matches) {
  if (match[0].includes("don't()")) {
    console.log(match[0]);
    state = false;
    continue;
  }

  if (match[0].includes("do()")) {
    state = true;
  }

  // console.log(match);
  if (state) {
    let firstNum = match[1];
    let secondNum = match[2];
    sum += firstNum * secondNum;
  }
}

console.log(sum);
