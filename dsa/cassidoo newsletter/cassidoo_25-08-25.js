/**
 * 
 * const orders = [
  { table: 1, items: ["burger", "fries"] },
  { table: 2, items: ["burger", "burger", "fries"] },
  { table: 1, items: ["salad"] },
  { table: 2, items: ["fries"] }
];

> orderSummary(orders)
{
  1: { burger: 1, fries: 1, salad: 1 },
  2: { burger: 2, fries: 2 }
}
// or, string output format:
"Table 1 ordered 1 burger, 1 fries, and 1 salad. Table 2 ordered 2 burgers and 2 fries."
 */

function orderSummary(orders) {
  let obj = {};

  for (let key in orders) {
    let order = orders[key];

    if (!obj[order.table]) {
      obj[order.table] = {};
    }

    let order_items = order.items;
    for (let i = 0; i < order_items.length; i++) {
      obj[order.table][order.items[i]] =
        (obj[order.table][order.items[i]] || 0) + 1;
    }
  }

  // construct string
  let str_arr = [];
  for (let key in obj) {
    let str = "";
    str += `Table ${key} ordered `;
    let temp = [];

    for (let el in obj[key]) {
      if (obj[key][el] > 1 && el.at(-1) != "s") {
        temp.push(`${obj[key][el]} ${el}s`);
      } else {
        temp.push(`${obj[key][el]} ${el}`);
      }
    }

    if (temp.length < 2) {
      str += temp.join("");
    } else {
      str +=
        temp.slice(0, temp.length - 1).join(", ") +
        " and " +
        temp.slice(temp.length - 1);
    }

    str_arr.push(str);
  }

  return str_arr.join(". ") + ".";
}

const orders = [
  { table: 1, items: ["burger", "fries"] },
  { table: 2, items: ["burger", "burger", "fries"] },
  { table: 1, items: ["salad"] },
  { table: 2, items: ["fries"] },
  { table: 3, items: ["fries"] },
];

console.log(orderSummary(orders)); // 'Table 1 ordered 1 burger, 1 fries and 1 salad. Table 2 ordered 2 burgers and 2 fries. Table 3 ordered 1 fries.'
