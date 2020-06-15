/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
 To find the middle node of a linked list, we keep two pointers(fast_ptr and slow_ptr).
 We move slow_ptr by one and fast_ptr by two. So, when fast_ptr reaches the end slow_ptr eventually reaches the middle node.
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode *fast_ptr = head;
         ListNode *slow_ptr = head;
        
        if(head != NULL) {
            while(fast_ptr != NULL && fast_ptr->next != NULL) {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
            }
        }
        return slow_ptr;
    }
};
