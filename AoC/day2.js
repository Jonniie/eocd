function solve(input) {
  let arr = input.split(",");
  let res = 0;
  for (let el of arr) {
    const [l, r] = el.split("-");

    let set = new Set();

    for (let i = +l; i <= +r; i++) {
      let len = (i + "").length;

      let k = 1;

      while (k <= len / 2) {
        if (len % k == 0) {
          let newStr2 = (i + "").substring(0, k);
          let newerStr = "".padEnd(len, newStr2);

          if (+newerStr >= +l && +newerStr <= +r) {
            if (!set.has(+newerStr)) {
              res += +newerStr;
            }
            set.add(+newerStr);
          }
        }
        k++;
      }
    }
    console.log(set);
  }
  return res;
}

fs.readFile("/home/j3ech/Documents/eocd/AoC/day2.txt", (err, data) => {
  if (err) throw err;

  const d = data.toString();
  let res = solve(d);
  //   console.log(res);
});

const sample = `11-22,95-115,998-1012,1188511880-1188511890,222220-222224,
1698522-1698528,446443-446449,38593856-38593862,565653-565659,
824824821-824824827,2121212118-2121212124`;
const s1 = `824824821-824824827`;
console.log(solve(sample));
