// Cassidoo 23/09/2024
/**
This week's question:
You're designing a smart laundry sorting system. You have a list of clothing items, each with a color and a fabric type. Sort these items into the minimum number of loads n and return n, where items of the same color can be washed together, and some different fabric types cannot be mixed together. "Normal" fabric types can be mixed with "heavy", but "delicate" cannot be mixed with anything.

> minLaundryLoads(load1)
> 3 // one delicate red, one normal red, and one with the blues

> minLaundryLoads(load2)
> 2 // one delicate white, one with everything else
 */

function minLaundryLoads(arr) {
  let obj = {};
  let count = 0;

  for (let [color, type] of arr) {
    if (!obj[color]) obj[color] = [];
    obj[color].push(type);
  }

  for (let items in obj) {
    let tempObj = {};

    obj[items].forEach((el) => (tempObj[el] = (tempObj[el] || 0) + 1));

    if (tempObj["delicate"]) {
      count += tempObj["delicate"];
    }
    count += 1;
  }

  return count;
}

let load1 = [
  ["red", "normal"],
  ["blue", "normal"],
  ["red", "delicate"],
  ["blue", "heavy"],
];

let load2 = [
  ["white", "normal"],
  ["white", "delicate"],
  ["white", "normal"],
  ["white", "heavy"],
];

console.log(minLaundryLoads(load1)); // 3
console.log(minLaundryLoads(load2)); // 2
