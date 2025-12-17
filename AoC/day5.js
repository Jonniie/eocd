function solve(input) {
  let [range, _] = input.split("\n\n");
  let range_arr = range.split("\n");
  let good = [];

  for (let el of range_arr) {
    let [l, r] = el.split("-");

    good.push([+l, +r]);
  }

  let res = 0;
  good.sort((a, b) => a[0] - b[0]);

  res += good[0][1] - good[0][0] + 1;

  let farthest = good[0][1];

  for (let i = 1; i < good.length; i++) {
    let l = good[i][0];
    let r = good[i][1];

    if (l <= farthest) {
      l = farthest + 1;
    }

    if (l <= r) {
      res += r - l + 1;
    }

    farthest = Math.max(farthest, r);
  }

  return res;
}

fs.readFile("/home/j3ech/Documents/eocd/AoC/day5.txt", (err, data) => {
  if (err) throw err;

  const d = data.toString();
  let res = solve(d);
  console.log(res);
});

const input = `3-5
10-14
16-20
12-18

1
5
8
11
17
32`;
console.log(solve(input));
