function newYearsDay(year) {
  let date = new Date(`1/1/${year}`);

  return date.toLocaleString("en-us", { weekday: "long" });
}

console.log(newYearsDay(2025)); // Wednesday
console.log(newYearsDay(2024)); // Monday
