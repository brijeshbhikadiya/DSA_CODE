#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

     //deconstructor     deconstructor call karva keyword use thay delete
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory free for "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d,Node* &tail)
{
    if(head==NULL)  //jo node empty call thay to.
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else
    {  //empty shivay na aetale ke >=2
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
}

void insertAtTail(Node* &tail,int d,Node* head)
{
    if(tail==NULL)  //tail null hoy tayre.
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else
    {
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
    
}

void InsertionAtMiddle(Node* &tail,Node* &head,int position,int d)
{

    if(position==1)   //if position first j hoy to direct call insertionathead..
    {
        insertAtHead(head,d,tail);
        return;
    }

  
    int cnt=1;
    Node* temp=head;

    while(cnt<position-1)
    {
        temp=temp->next;    //je position ma nakhvanu hoy teni -1 node lakhi temp ne traverse karvvu.
        cnt++;
    }

      if(temp->next==NULL)  //jo last node hoy to insertionattail call karvu.
    {
        insertAtTail(tail,d,head);
        return;
    }

    //insertion at middle       //this is for middle value
    Node* nextToInsert=new Node(d);

    nextToInsert->next = temp->next;
    temp->next->prev=nextToInsert;
    temp->next=nextToInsert;
    nextToInsert->prev=temp;


}

   void deleteNode(int position,Node* &head,Node* &tail)
    {
        if(position==1)
        {
            Node* temp=head;
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;

            delete temp;    //hamesha deconstructor call karta pehla de delete karvanu aene null set karvu.
        }
        else
        {
            Node* curr=head;
            Node* prev=NULL;

            int cnt=1;

            while (cnt<position)
            {
                prev=curr;
                curr=curr->next;
               
                cnt++;
            }

            if(curr->next==NULL)
            {
                tail=prev;
            }

          curr->prev=NULL;
          prev->next=curr->next;
          curr->next=NULL;  //simply delete logic

            delete curr;  //call deconstructor

            
        }
    }


//traversing a linklist....
void print(Node* &head) 
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//get length of a linklist...
int getLength(Node* &head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}


int main()
{

    Node* head=NULL;  //this condition when node is empty so its hendle above in if condition head==NULL and tail==NULL.
    Node* tail=NULL;
    // Node* node1=new Node(10);

    // Node* head=node1;
    // Node* tail=node1;

    print(head);
    // cout<<"Length Of LinkList :"<<getLength(head)<<endl;

    insertAtHead(head,11,tail);
    print(head);

    insertAtHead(head,12,tail);
    print(head);

    insertAtTail(tail,14,head);
    print(head);

    insertAtTail(tail,18,head);
    print(head);

    InsertionAtMiddle(tail,head,3,6);
    print(head);

     InsertionAtMiddle(tail,head,1,5);
    print(head);

       InsertionAtMiddle(tail,head,7,15);
    print(head);

        InsertionAtMiddle(tail,head,8,19);
    print(head);

    deleteNode(8,head,tail);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;




}