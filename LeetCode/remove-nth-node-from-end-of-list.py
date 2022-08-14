# https://leetcode.com/problems/remove-nth-node-from-end-of-list/ 

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # 2 pass 
        size = 0
        temp = head
        while temp is not None:
            size += 1
            temp = temp.next
 
        nf = size - n - 1 
        
        # case1: [1], n = 1 | nf = 1-1-1 = -1 | return head.next = Null 
        # case2: [1,2], n = 2 | nf = 2-2-1 = -1 | return head.next = node 2
        if nf < 0:
            return head.next
        
        curNode = head
        for _ in range(nf):
            curNode = curNode.next

        curNode.next = curNode.next.next
        return head