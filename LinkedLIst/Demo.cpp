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
        this->next=next;
    }

    
};

int main()
{
    Node* node1=new Node(10);  //creation of object  and when object is create autimatically call a constructor.
    cout<<node1->data<<endl;  //print data
   cout<<node1->next<<endl;  //print address
}

