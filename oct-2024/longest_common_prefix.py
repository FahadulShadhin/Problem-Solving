
def longest_common_prefix(strs: list[str]) -> str:
  comp = strs[0]

  for i in range(1, len(strs)):
    temp = ''
    for j in range(0, min(len(comp), len(strs[i]))):
      if comp[j] == strs[i][j]:
        temp += strs[i][j]
      else:
        break
    comp = temp

  return temp

if __name__=='__main__':
  strs = ["flower", "flow", "flight"]
  strs1 = ["dog", "racecar", "car"]
  res = longest_common_prefix(strs1)
  print(res)