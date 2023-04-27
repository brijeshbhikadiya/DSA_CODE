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

Node* reverse1(Node* head)
{
	//base case
	if(head==NULL || head->next==NULL)
	{
		return head;
	}

	Node* chotaHead=reverse1(head->next);  //recursive call bakini node mate.

	head->next->next=head;  //pehli node mate
	head->next=NULL;

	return chotaHead;
}


Node* reverseLinkedList(Node *head)
{
 	 
	 return reverse1(head);
}

