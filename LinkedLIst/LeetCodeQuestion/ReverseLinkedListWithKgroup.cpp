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
    ListNode* reverseKGroup(ListNode* head, int k) {

        //base case
        if(head==NULL)
        {
            return NULL;
        }

        ListNode* forward=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        
        ListNode* temp=head;
        int count=0;

        int countNodes=0;
        while(temp!=NULL)
        {
            countNodes++;
            temp=temp->next;
        }

        if(countNodes>=k)
        {
             while(curr!=NULL && count<k)
            {
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                count++;
             }

            if(forward!=NULL)
                {
                     head->next=reverseKGroup(forward,k);
                }
            }
        else
        {
            return head;
        }
       
        return prev;


        
    }
};