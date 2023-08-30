#include<iostream>
#include<unordered_map>
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

    //deconstructor     deconstructor call karva keyword use thay delete
                       // it used to memory free karva. a linkedlist node.
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

 void InsertionAtHead(Node* &head,int d)
    {
        //new node create
        Node* temp=new Node(d);  //temp node banavshe je add karvani che e
        temp->next=head;  //aenu pointer head ne point karshe
        head=temp;  //navo head temp ma vayavshe km ke pehli node temp che.
    }

    
 void InsertionAtTail(Node* &tail,int d)
    {
        //new node create
        Node* temp=new Node(d);  //temp node banavshe je add karvani che e
        tail->next=temp; //aenu pointer temp ne point karshe
        tail=temp;  //navo tail temp ma vayavshe km last node temp che.
    }

void InsertionAtMiddle(Node* &tail,Node* &head,int position,int d)
{

    if(position==1)   //if position first j hoy to direct call insertionathead..
    {
        InsertionAtHead(head,d);
        return;
    }

    
      if(temp->next==NULL)  //jo last node hoy to insertionattail call karvu.
    {
        InsertionAtTail(tail,d);
        return;
    }

  
    int cnt=1;
    Node* temp=head;

    while(cnt<position-1)
    {
        temp=temp->next;    //je position ma nakhvanu hoy teni -1 node lakhi temp ne traverse karvvu.
        cnt++;
    }


    //insertion at middle       //this is for middle value
    Node* nextToInsert=new Node(d);

    nextToInsert->next = temp->next;
    temp->next = nextToInsert;

}

bool detectCycle(Node* head)
{
    if(head==NULL)
    {
        return false;
    }

    Node* fast=head;
    Node* slow=head;

    Node* temp=head;

    while (slow!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        
        slow=slow->next;
          if(slow==fast)
    {
        return true;
    }
    
    }
    return false;

  
    

}

bool isCircular(Node* head)
{
  if(head==NULL)
  {
    return true;
    
}
    unordered_map<Node* ,bool> m;
    m[head]=true;
    Node* temp=head->next;
  
 while(temp!=NULL && temp!=head)
    { 
      m[temp]=true;
      temp=temp->next;
}

  if(m[temp])
  {
    return true;
    }
  else{
    return false;
}
  
}

     //print a linked list pass the head value
   
    void print(Node* &head)  //refrence lidhu kem ke aapde original linkedlist ma j change karvu che aetale.
    {
     
        Node* temp=head;  //head ne temprory mate temp ma store karyo.

        while(temp!=NULL)
        {
            cout<< temp->data<<" "; // null nahi thay taya sudhi chalshe loop. data print thase
            temp = temp->next;  //and temp ne increment avi  rite thase.
        }
        cout<<endl;
    }

    //delete node in linklist
    void deleteNode(int position,Node* &head,Node* &tail)
    {
        if(position==1)
        {
            Node* temp=head;
            head=head->next;

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

            if(curr->next==NULL)  //tail ne set karyu khali bus.
            {
                tail=prev;
            }

            prev->next=curr->next;  //simply delete logic

            curr->next=NULL;
            delete curr;  //call deconstructor

            
        }
    }

int main()
{

   // -> aa add karshe element head thi.
//     Node* node1=new Node(10);  //creation of object  and when object is create autimatically call a constructor.


//    Node* head=node1;
//    Node* tail=node1;
//    print(head);

//    InsertionAtHead(head,12); //12 head karya aama 12 per head hase.
//     print(head);

//     InsertionAtHead(head,15); ///15 head karya aama 12 per head hase.
//     print(head);


     //   -> aa add karshe element tail thi.
    Node* node2=new Node(10);
    Node* head1=node2;
    Node* tail1=node2;
    print(head1);


    InsertionAtTail(tail1,12); //12 head karya aama 12 per head hase.
    print(head1);

    InsertionAtTail(tail1,15); ///15 head karya aama 12 per head hase.
    print(head1);

    InsertionAtMiddle(tail1,head1,4,22);
    print(head1);

    tail1->next=head1->next;

    bool ans1=detectCycle(tail1);

    if(ans1)
    {
        cout<<"cycle is detected"<<endl;
    }
    else
    {
        cout<<"cycle is undetected"<<endl;
    }

    // cout<<"head"<<head1->data<<endl;
    // cout<<"tail"<<tail1->data<<endl; 

    // deleteNode(3,head1,tail1);
    // print(head1);

    // cout<<"head"<<head1->data<<endl;
    // cout<<"tail"<<tail1->data<<endl; 

    // bool ans=isCircular(head1);
    // if(ans)
    // {
    //     cout<<"IT IS A CIRCULAR LINKLIST"<<endl;

    // }
    // else
    // {
    //     cout<<"IT IS NOT A CIRCULAR LINKLIST"<<endl;
    // }

   
}

