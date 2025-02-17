function binary_encoder(n, k) {
  let res = ["0"];

  let key = { 0: "01", 1: "10" };

  while (n > 1) {
    let curr = res.at(-1);
    let temp = [];

    for (let chr of curr) {
      temp.push(key[chr]);
    }

    res.push(temp.join(""));
    n--;
  }

  return +res.at(-1)[k - 1];
}

console.log(binary_encoder(5, 5)); //0110100110010110
