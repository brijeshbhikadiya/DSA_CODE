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

void reverse(Node* &head,Node* curr,Node* prev)
{
	//base case
	if(curr==NULL)
	{
		head=prev;
		return;
	}


	Node* forward=curr->next;
	reverse(head,forward,curr);  //pehlo chodine aagal no part delete karyo.
	curr->next=prev;
}


Node* reverseLinkedList(Node *head)
{
    


    //using recursion..
	Node* prev=NULL;
	Node* curr=head;

	reverse(head,curr,prev);
	return head;
	
}

