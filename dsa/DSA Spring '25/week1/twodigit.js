function twodigits(a, b) {
  let l = b.toString().length;
  let combinations = new Set(["2", "5"]);
  let res = new Set(["2", "5"]);

  if (b - a <= 10 && b <= 10) {
    if ((b < 2 && a < 2) || (a > 5 && b > 5)) {
      return 0;
    } else if (b >= 5 && a <= 2) {
      return combinations.length;
    } else if ((b < 5 && a >= 1) || b >= 2) {
      return 1;
    }
  }

  let idx = 2;

  while (idx <= l) {
    for (let curr of combinations) {
      let new_num2 = curr.padEnd(idx, 2);
      let new_num5 = curr.padEnd(idx, 5);

      if (new_num2 >= a && new_num2 <= b) {
        res.add(new_num2);
      }

      if (new_num5 >= a && new_num5 <= b) {
        res.add(new_num5);
      }

      combinations.add(new_num2);
      combinations.add(new_num5);
    }

    idx++;
  }

  if (a > 5) {
    return res.size - 2;
  } else if (a > 2) return res.size - 1;
  else return res.size;
}

console.log(twodigits(6, 936)); // 6
console.log(twodigits(60, 70)); // 0
console.log(twodigits(25, 25)); // 1
console.log(twodigits(1, 10 ** 9)); // 1022
console.log(twodigits(123456789, 987654321)); // 512
