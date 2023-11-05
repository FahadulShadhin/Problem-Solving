# https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dup = head

        while (dup and dup.next):
            if (dup.val == dup.next.val):
                dup.next = dup.next.next
            else:
                dup = dup.next

        return head
