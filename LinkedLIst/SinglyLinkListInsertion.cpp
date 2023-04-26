#include<iostream>
using namespace std;

class Node   //node is collection data and address of next node.
{
    public:
    int data;  //data
    Node* next; //address of next nodes.


    //constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

     
};

 void InsertionAtHead(Node* &head,int d)
    {
     
        //new node create
        Node* temp=new Node(d);  //temp node banavshe je add karvani che e
        temp->next=head;  //aenu pointer head ne point karshe
        head=temp;  //navo head temp ma vayavshe km ke pehli node temp che.

    }

     //print a linked list pass the head value
   
    void print(Node* &head)
    {
     
        Node* temp=head;  //head ne temprory mate temp ma store karyo.

        while(temp!=NULL)
        {
            cout<< temp->data<<" "; // null nahi thay taya sudhi chalshe loop. data print thase
            temp = temp->next;  //and temp ne increment avi  rite thase.
        }
        cout<<endl;
    }


int main()
{
    Node* node1=new Node(10);  //creation of object  and when object is create autimatically call a constructor.


   Node* head=node1;
   print(head);

   InsertionAtHead(head,12); //12 head karya aama 12 per head hase.
    print(head);

    InsertionAtHead(head,15); ///15 head karya aama 12 per head hase.
    print(head);

   
}

