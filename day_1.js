function groupAnagrams(arr) {
  const obj = {};
  for (let word of arr) {
    let key = word.split("").sort().join("");
    obj[key] ? obj[key].push(word) : (obj[key] = [word]);
  }

  return Object.values(obj);
}

let arr = ["eat", "tea", "tan", "ate", "nat", "bat"];
console.log(groupAnagrams(arr)); // [ [ 'eat', 'tea', 'ate' ], [ 'tan', 'nat' ], [ 'bat' ] ]
