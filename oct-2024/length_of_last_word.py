def length_of_last_word(s: str) -> int:
  words = [word for word in s.split() if word]
  return len(words[-1])

if __name__=='__main__':
  print(length_of_last_word('   fly me   to   the moon  '))
  print(length_of_last_word('Hello World'))
  print(length_of_last_word('luffy is still joyboy'))
  print(length_of_last_word(' word     '))
