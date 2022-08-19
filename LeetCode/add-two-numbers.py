# https://leetcode.com/problems/add-two-numbers/ 

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        ans = dummy
        
        carry = 0
        s = 0
        while l1 and l2:
            ans.next = ListNode()
            ans = ans.next
            s = l1.val + l2.val + carry
            ans.val = s%10
            carry = s//10
            
            l1 = l1.next
            l2 = l2.next
            
        if l1:
            while l1:
                ans.next = ListNode()
                ans = ans.next
                s = l1.val + carry
                ans.val = s%10
                carry = s//10

                l1 = l1.next
        if l2:
            while l2:
                ans.next = ListNode()
                ans = ans.next
                s = l2.val + carry
                ans.val = s%10
                carry = s//10
                
                l2 = l2.next
        
        if s > 9:
            ans.next = ListNode()
            ans = ans.next
            ans.val = s//10
            
        return dummy.next