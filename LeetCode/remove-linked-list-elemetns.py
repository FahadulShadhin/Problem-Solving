# https://leetcode.com/problems/remove-linked-list-elements/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head is None:
            return head
            
        curNode = head
        while curNode.next is not None:
            if curNode.next.val == val:
                curNode.next = curNode.next.next
            else:
                curNode = curNode.next
        
        # first node is not considered in the while loop 
        # if first node value == val delete it 
        if head.val == val:
            head = head.next
                
        return head  