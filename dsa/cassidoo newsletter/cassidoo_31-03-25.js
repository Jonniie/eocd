/** Casiddoo Newsletter
    This week's question:
    Write a function that takes an array of timestamps (HH:MM) from the same day and returns the longest gap in minutes between consecutive timestamps.

    Examples:

    findLongestTimeGap(['12:00'])
    0

    findLongestTimeGap(['09:00', '11:00'])
    120

    findLongestTimeGap(['14:00', '09:00', '15:00', '10:30'])
    210

    findLongestTimeGap(['08:00', '10:00', '10:00', '14:00'])
    240
 */

function findLongestTimeGap(arr) {
  if (arr.length == 1) return 0;

  let new_arr = arr.map((el) => (el = el.split(":")));
  new_arr.sort((a, b) => a[0] - b[0]);

  let max = 0;

  for (let i = 1; i < new_arr.length; i++) {
    let min1 = new_arr[i][0] * 60 + +new_arr[i][1];
    let min2 = new_arr[i - 1][0] * 60 + +new_arr[i - 1][1];

    max = Math.max(min1 - min2, max);
  }

  return max;
}

console.log(findLongestTimeGap(["14:00", "09:00", "15:00", "10:30"])); // 210
console.log(findLongestTimeGap(["12:00"])); // 0
console.log(findLongestTimeGap(["09:00", "11:00"])); // 120
console.log(findLongestTimeGap(["14:00", "09:00", "15:00", "10:30"])); // 210
console.log(findLongestTimeGap(["08:00", "10:00", "10:00", "14:00"])); // 240
