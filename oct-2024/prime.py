import math

def is_prime(num: int) -> bool:
  if num < 2:
    return False
  
  for i in range(2, math.floor(math.sqrt(num)) + 1):
    if (num % i == 0):
      return False
    
  return True

def find_primes(arr: list[int]) -> list[int]:
  res = []
  for num in arr:
    if is_prime(num):
      res.append(num)
  return res

if __name__=='__main__':
  num = 11
  arr = [11, 1, 2, 4, 3, 7]
  # print(is_prime(num))
  print(find_primes(arr))
