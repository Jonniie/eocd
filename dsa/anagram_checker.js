function anagram_checker(str1, str2) {
  let hm = {};

  for (let char of str1) {
    let chr = char.toLowerCase();
    hm[chr] = (hm[chr] || 0) + 1;
  }

  for (let char of str2) {
    let chr = char.toLowerCase();

    hm[chr] = (hm[chr] || 0) - 1;

    if (hm[chr] < 0) {
      return false;
    }
  }

  for (let key in hm) {
    if (hm[key] != 0) {
      return false;
    }
  }

  return true;
}

console.log(anagram_checker("cat", "tac"));
