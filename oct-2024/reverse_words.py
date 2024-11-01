# https: // leetcode.com/problems/reverse-words-in -a-string/description/

def reverse_words(s: str) -> str:
  i, j = 0, len(s) - 1
  
  ## skip the white spaces in fron and back ##
  while s[i] == ' ':
    i += 1
  
  while s[j] == ' ':
    j -= 1
  ###########################################

  temp = ''
  res = []
  for k in range(i, j+1):
    if s[k] == ' ':
      if temp != '':
        res.append(temp)
        temp = ''
    else:
      temp += s[k]

  res.append(temp)
      
  return ' '.join(res[::-1])

def reverse_words_1(s: str) -> str:
  splitS = s.split(' ')
  
  rev = ''
  for i in range(len(splitS)-1, -1, -1):
    if splitS[i] != '':
      rev += splitS[i] + ' '
  
  return rev


if __name__=='__main__':
  s = "the sky is blue"
  s1 = "  hello world  "
  s2 = "a good   example"
  # res = reverse_words(s2)
  res = reverse_words_1(s1)
  print(res)