function binary_encoder(n) {
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

  return res.join("\n");
}

console.log(binary_encoder(5)); //'0\n01\n0110\n01101001'
