# https: // leetcode.com/problems/student-attendance-record-i/description/

class Solution:
  def checkRecord(self, s: str) -> bool:
    countAbsent = 0
    for i in range(0, len(s)):
      if s[i] == 'A':
          countAbsent += 1
      if s[i] == 'L' and (i >= 1 and i <= len(s)-2):
          if (s[i-1] == 'L') and (s[i+1] == 'L'):
              return False

    if countAbsent >= 2:
      return False

    return True
