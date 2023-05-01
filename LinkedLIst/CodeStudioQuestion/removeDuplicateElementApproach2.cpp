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

Node *removeDuplicates(Node *head)
{
   if(head == NULL)
    {
        return NULL;
    }

    unordered_map<int,bool>visited;

    Node* curr = head;

    while(curr->next!= NULL)
    {

        visited[curr->data]=true;
        if(visited[curr->next->data]==true)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

