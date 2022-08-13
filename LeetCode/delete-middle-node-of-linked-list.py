# https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/ 

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # get length of the list 
        n = 0
        curNode = head
        while curNode is not None:
            n += 1
            curNode = curNode.next
        
        # if list length is 1, return None 
        if n==1:
            head = None
        
        # if list length is greater than 1, 
        # get the node before the middle node, and delete the middle node
        else:
            temp = head
            for _ in range((n//2)-1):
                temp = temp.next
            temp.next = temp.next.next
        
        return head