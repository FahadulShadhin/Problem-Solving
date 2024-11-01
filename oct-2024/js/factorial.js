
function find_factorial(num) {
  if (num === 0 || num === 1) return 1;

  let fact = 1;
  for (let i=1; i<=num; i++) {
    fact = fact * i;
  }
  return fact;
}

(function main() {
  const num = 7;
  const factorial = find_factorial(num);
  console.log(factorial);
})();
