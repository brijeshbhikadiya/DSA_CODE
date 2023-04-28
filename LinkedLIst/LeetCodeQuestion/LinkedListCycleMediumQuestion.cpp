/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
        {
            return NULL;
        }

        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* intersection=NULL;

        while(slow != NULL && fast != NULL)
        {

            slow = slow->next;

            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
            }

           

            if(fast==slow && slow != NULL && fast != NULL)
            {
                intersection = slow;
                break;
            }
        }

        if (intersection == NULL) {
        return NULL;
    }

    ListNode* ptr1 = head;
    ListNode* ptr2 = intersection;

    while (ptr1 != ptr2) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return ptr1;
}
    
};