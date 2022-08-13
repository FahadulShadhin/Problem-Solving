# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        node.val = node.next.val
        node.next = node.next.next

"""
List = 4 -> 5 -> 1 -> 9 -> None
n1 = ListNode(4)
n1.val = 4
n1.next = ListNode(5)

n2 = ListNode(5)
n2.val = 5
n2.next = ListNode(1)

n3 = ListNode(1)
n3.val = 1
n3.next = ListNode(9)

n4 = ListNode(9)
n4.val = 9
n4.next = None
-----------------------------------------------------------------------
Delete 5:
if node = ListNode(5)
node.val = 5
node.next = ListNode(1)

make node.val = ListNode(5).next.val = ListNode(1).val = 1
make node.next = ListNode(5).next.next = ListNode(1).next = ListNode(9)
list becomes: 4 -> 1 -> 9 -> None
"""