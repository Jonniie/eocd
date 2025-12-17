function solve(input) {
  const arr = input.split("\n");

  let res = 0;
  for (let el of arr) {
    let el_arr = el.split("").map((el, idx) => [el, idx]);
    el_arr.sort((a, b) => b[0] - a[0]);
    console.log(el_arr.slice(0, 12).sort((a, b) => a[1] - b[1]));
  }
  return res;
}

fs.readFile("/home/j3ech/Documents/eocd/AoC/day3.txt", (err, data) => {
  if (err) throw err;

  const d = data.toString();
  let res = solve(d);
  // console.log(res);
});

const s1 = `818181911112111`;
console.log(solve(s1));
