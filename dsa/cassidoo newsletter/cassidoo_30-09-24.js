// Cassidoo 30/09/24
// Implement your own String split() function in your preferred programming language.

String.prototype.c_split = function (char) {
  let split_arr = [];
  let temp_str = "";
  let char_length = char.length == 0 ? 1 : char.length;

  if (char == "") {
    for (let i = 0; i < this.length; i++) {
      split_arr.push(str[i]);
    }
  } else {
    for (let i = 0; i < this.length; i++) {
      let el = this.slice(i, i + char_length);
      if (el !== char) {
        temp_str += this[i];
      } else {
        split_arr.push(temp_str);
        i += char_length - 1;
        temp_str = "";
      }
    }

    if (temp_str != "") {
      split_arr.push(temp_str);
    }
  }

  return split_arr;
};

const str = "This is so, so silly!";
console.log(str.c_split(" "));
console.log(str.c_split(""));
console.log(str.c_split(", "));
console.log(str.c_split(" so, so"));
