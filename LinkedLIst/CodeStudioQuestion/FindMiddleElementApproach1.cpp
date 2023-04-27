#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getLength(Node* head)
{
    int length=0;
    while(head!=NULL)
    {
        length++;
        head=head->next;
    }
    return length;
}

Node *findMiddle(Node *head) {
    // Write your code here

    int length=getLength(head);

    int ans=(length/2);

    int cnt=0;
    Node* temp=head;
     while (cnt < ans) {
       temp = temp->next;
       cnt++;
     }
     return temp;
}
    