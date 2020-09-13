/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* node) {
        ListNode* prevnode = NULL;
        ListNode* nextnode = NULL;
        
        while(node != NULL) {
            nextnode = node->next;
            node->next = prevnode;
            prevnode = node;
            node = nextnode;
        }
        return prevnode;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        
        // finding the mid pointer of the list
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* mid = NULL;
        
        while(fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast != NULL) mid = slow->next;
        else mid = slow;
        
        // reverse the second half of the linked list
        ListNode* reversedHead = reverse(mid);
        
        // comparing the values of fast half and second half of the list
        while(reversedHead != NULL) {
            if(reversedHead->val != head->val)
                return false;
            
            reversedHead = reversedHead->next;
            head = head->next;
        }
        
        return true;
    }
};