// BULLLSHIT

const fs = require("fs");

function readFile(filePath) {
  try {
    const data = fs.readFileSync(filePath);
    return data.toString();
  } catch (error) {
    console.error(`Got an error trying to read the file: ${error.message}`);
  }
}

const grid = readFile("./Advent of Code/aoc#4.txt");

function countXMAS(grid) {
  const word = "XMAS";
  const directions = [
    [0, 1], // right
    [0, -1], // left
    [1, 0], // down
    [-1, 0], // up
    [1, 1], // down-right diagonal
    [1, -1], // down-left diagonal
    [-1, 1], // up-right diagonal
    [-1, -1], // up-left diagonal
  ];

  const rows = grid.length;
  const cols = grid[0].length;
  let count = 0;

  // Loop through each cell in the grid
  for (let r = 0; r < rows; r++) {
    for (let c = 0; c < cols; c++) {
      // Check if the current cell is 'X' (start of "XMAS")
      if (grid[r][c] === "X") {
        // Check each direction
        for (let [dr, dc] of directions) {
          // Check if the word fits within the grid in this direction
          if (
            r + 3 * dr >= 0 &&
            r + 3 * dr < rows &&
            c + 3 * dc >= 0 &&
            c + 3 * dc < cols
          ) {
            // Check the next 4 positions in the current direction
            let match = true;
            for (let i = 0; i < word.length; i++) {
              if (grid[r + i * dr][c + i * dc] !== word[i]) {
                match = false;
                break;
              }
            }
            // If all characters match, increment the count
            if (match) {
              count++;
            }
          }
        }
      }
    }
  }

  return count;
}

console.log(countXMAS(grid)); // Outputs: 18
