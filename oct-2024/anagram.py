def is_anagram(word1: str, word2: str) -> bool:
  if len(word1) != len(word2):
    return False
  
  freq_arr = [0] * 126
  
  for c in word1:
    temp = c.lower()
    freq_arr[ord(temp)] += 1

  for c in word2:
    temp = c.lower()
    freq_arr[ord(temp)] -= 1

  if all(freq == 0 for freq in freq_arr):
    return True
  
  return False

if __name__=='__main__':
  print(is_anagram('abCcCdde%', 'eAd%CCCbd'));