const { gockeCoefficient } = require("./gocke");

const tests = [
  [1, 161775865],
  [2, 30881403],
  [42, 325647303],
  [123, 492092873],
  [999, 2766190],
];

tests.forEach(([input, expected]) => {
  const result = gockeCoefficient(input);
  if (result !== expected) {
    console.error(`FAIL: ${input} → ${result} (expected ${expected})`);
    process.exit(1);
  }
});

console.log("All tests passed.");
