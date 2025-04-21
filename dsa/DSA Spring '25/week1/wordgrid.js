function count(arr, word) {
  let rword = word.split("").reverse().join("");
  let count = 0;

  const rows = arr.length;
  if (rows === 0) return 0;
  const cols = arr[0].length;

  //   Horizontal Traversal
  for (let i = 0; i < rows; i++) {
    let curr = arr[i];
    for (let j = 0; j < arr[i].length - word.length + 1; j++) {
      let nw = curr.slice(j, j + word.length);
      if (nw == word || nw == rword) {
        count++;
      }
    }
  }

  if (word.length == 1) {
    return count;
  }

  //   Vertical Traversal
  for (let i = 0; i < cols.length; i++) {
    let curr = "";
    for (let j = 0; j < rows; j++) {
      let nw = arr[j][i];
      curr += nw;
    }

    if (curr.includes(word) || curr.includes(rword)) {
      console.log(curr);
      count++;
    }
    curr = "";
  }

  // Diagonal Traversal (top-left to bottom-right)
  for (let i = 0; i <= rows - word.length; i++) {
    for (let j = 0; j <= cols - word.length; j++) {
      let diagonal = "";
      for (let k = 0; k < word.length; k++) {
        diagonal += arr[i + k][j + k];
      }
      if (diagonal === word || diagonal === rword) {
        count++;
      }

      console.log(diagonal);
    }
  }

  // Diagonal Traversal (top-right to bottom-left)
  for (let i = 0; i <= rows - word.length; i++) {
    for (let j = word.length - 1; j < cols; j++) {
      let diagonal = "";
      for (let k = 0; k < word.length; k++) {
        diagonal += arr[i + k][j - k];
      }
      if (diagonal === word || diagonal === rword) {
        count++;
      }
    }
  }

  return count;
}

let arr = ["TIRATIRA", "IRATIRAT", "RATIRATI", "ATIRATIR"];
console.log(count(arr, "AA"));
