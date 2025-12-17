// Part 1
function is_palindrome(str) {
  const months = { 9: 30, 4: 30, 6: 30, 11: 30 };

  let date_str = "";
  for (let char of str) {
    if (+char) date_str += char;
  }

  for (let i = 0; i < date_str.length; i++) {
    if (date_str[i] == date_str[date_str.length - 1 - i]) {
      continue;
    } else {
      return false;
    }
  }

  console.log("this date is palindrome")


  // check if date is valid

  console.log(date_str);
}

console.log(is_palindrome("5-25-25"));
console.log(is_palindrome("25/05/25"));
console.log(is_palindrome("3333 | 03 | 03"));
console.log(is_palindrome(" 31-11-13"));
// Part 2

// function remove_tags(str) {
//   let res = [];
//   let num = str.split("\n");
//   num.forEach((s) => {
//     let validItem = "";
//     let valid = false;
//     for (let el of s) {
//       if (el == "<") {
//         valid = false;
//         continue;
//       }
//       if (el == ">") {
//         valid = true;
//         continue;
//       }

//       if (valid) validItem += el;
//     }

//     if (validItem.length > 0) res.push(validItem);
//   });

//   return res;
// }

// // results = `
// // <li>100% Cotton</li>
// // <li class="highlight-gray">Imported</li>
// // <li></li>
// // <li><p>Machine Wash in Cold Water</p></li>
// // `;

// // console.log(remove_tags(results));
// // [ '100% Cotton', 'Imported', 'Machine Wash in Cold Water' ]

// console.log(is_palindrome("25/05/25"));
// console.log(is_palindrome("5-25-25"));
