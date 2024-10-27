def isPalindrome(word1: str, word2:str) -> bool:
  if len(word1) != len(word2):
    return False
  
  p1 = 0 
  p2 = len(word2) - 1

  while p1 < len(word1):
    if (word1[p1] != word2[p2]):
      return False
    
    p1 += 1
    p2 -= 1
    
  return True

if __name__=='__main__':
  print(isPalindrome('abcde', 'edcba'))
