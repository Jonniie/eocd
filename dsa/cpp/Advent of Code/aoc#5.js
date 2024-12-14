const fs = require("fs");

function readFile(filePath) {
  try {
    const data = fs.readFileSync(filePath);
    return data.toString();
  } catch (error) {
    console.error(`Got an error trying to read the file: ${error.message}`);
  }
}

const aoc = readFile("./Advent of Code/aoc#5.txt");
console.log(aoc);

// let arr = aoc.split("\n");

// console.log(arr);

// function main() {
//   let rules = {};
//   let pages = [];
//   let correct = [];
//   for (let el of arr) {
//     if (el.includes("|")) {
//       let [key, val] = el.split("|");
//       if (rules[key]) {
//         rules[key].push(val);
//       } else {
//         rules[key] = [];
//       }
//     } else {
//       if (el !== "") pages.push(el);
//     }
//   }

//   console.log(rules);

//   for (let i = 0; i < pages.length; i++) {
//     let curr_pages = pages[i];
//     let state = true;
//     let curr_arr = curr_pages.split(",");
//     for (let j = 0; j < curr_arr.length; j++) {
//       let curr = curr_arr[j];
//       let el = rules[curr];
//       if (el == undefined || el.length == 0) {
//         continue;
//       }
//       let idx_of_curr = curr_arr.indexOf(curr);
//       console.log(idx_of_curr);
//       console.log(curr);
//       for (let k = 0; k < el.length; k++) {
//         let idx_of_rule = k;
//         console.log(k);

//         if (idx_of_curr < idx_of_rule) {
//           continue;
//         } else {
//           state = false;
//         //   break;
//         }
//       }
//     }

//     if (state) {
//       correct.push(curr_arr);
//     }
//   }

//   console.log(correct);
// }

// main();

function parseInput(input) {
  const parts = input.split("\n\n");
  const rules = parts[0].split("\n").map((line) => {
    const [before, after] = line.split("|").map(Number);
    return { before, after };
  });
  const updates = parts[1]
    .split("\n")
    .map((update) => update.split(",").map(Number));
  return { rules, updates };
}

function buildGraph(rules) {
  const graph = {};
  const inDegree = {};

  // Initialize the graph and in-degree map
  rules.forEach(({ before, after }) => {
    if (!graph[before]) graph[before] = [];
    if (!graph[after]) graph[after] = [];
    graph[before].push(after);
    inDegree[after] = (inDegree[after] || 0) + 1;
    if (!(before in inDegree)) inDegree[before] = 0;
  });

  return { graph, inDegree };
}

function isValidUpdate(update, graph, inDegree) {
  const visited = new Set();
  const queue = [];

  // Add nodes with in-degree 0 (no dependencies)
  update.forEach((page) => {
    if (inDegree[page] === 0) {
      queue.push(page);
    }
  });

  // Process the update list and check for valid order
  let idx = 0;
  while (queue.length > 0) {
    const page = queue.shift();
    visited.add(page);

    // Check if current page matches the order in the update
    if (page !== update[idx]) {
      return false;
    }
    idx++;

    // Process neighbors
    if (graph[page]) {
      graph[page].forEach((neighbor) => {
        inDegree[neighbor]--;
        if (inDegree[neighbor] === 0 && !visited.has(neighbor)) {
          queue.push(neighbor);
        }
      });
    }
  }

  return idx === update.length;
}

function findMiddlePage(update) {
  const midIndex = Math.floor(update.length / 2);
  return update[midIndex];
}

function solve(input) {
  const { rules, updates } = parseInput(input);
  const { graph, inDegree } = buildGraph(rules);

  console.log(rules);
  console.log(graph);

  let sum = 0;

  // Check each update and find the middle page if valid
  updates.forEach((update) => {
    if (isValidUpdate(update, graph, { ...inDegree })) {
      sum += findMiddlePage(update);
    }
  });

  return sum;
}

// Example usage:
const input = aoc;

console.log(solve(input)); // Expected output: 143
