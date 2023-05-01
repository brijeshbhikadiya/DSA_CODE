/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
Node* FloyedDetection(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast != NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }

        slow=slow->next;

        if(fast==slow && slow!=NULL && fast != NULL)
        {
            return slow;
        }
    }
    return NULL;


}

Node* startingPointOfNode(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* intersection=FloyedDetection(head);

       if(intersection==NULL)
    {
        return NULL;
    }

    Node* slow=head;

 

    while(intersection!=slow)
    {
         slow=slow->next;
        intersection=intersection->next;
       
    }
    return slow ;
}

Node *removeLoop(Node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

    Node* startPoint=startingPointOfNode(head);

    if(startPoint==NULL)
    {
        return head;
    }

    Node* temp=startPoint;

    while(temp->next != startPoint)
    {
        temp=temp->next;
    }

   temp->next=NULL;

   return head;

}