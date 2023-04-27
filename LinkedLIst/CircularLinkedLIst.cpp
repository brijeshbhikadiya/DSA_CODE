#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
class Node{
    public:

    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
      
      ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for "<<value<<endl;
    }
};
void print(Node* &tail)
{
   
    Node* temp=tail;
    if(tail==NULL)
    {
        cout<<"LIST IS EMPTY "<<endl;
        return;
    }
    do    //aek var to print karshej.
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}

void insertElement(Node* &tail,int element,int d)
{


    //empty list
    if(tail==NULL)
    {
       
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {

        //non-empty list
        //assuring that the element is presenting.
        Node* curr=tail;

        while(curr->data!=element)
        {
            curr=curr->next;
        }

        //element found current represting current vala element.
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
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

void deleteNode(Node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"LINKEDLIST IS EMPTY PLEAS ENTER A VALUE"<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 node linkedlist delete;
        if(curr==prev)
        {
            tail=NULL;
        }

        //>=2 linklist element
        if(tail==curr)
        {
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    Node* tail=NULL;



    insertElement(tail,5,3);
    print(tail);

    insertElement(tail,3,7);
    print(tail);

    // insertElement(tail,7,9);
    // print(tail);

    // insertElement(tail,9,11);
    // print(tail);

    // insertElement(tail,7,12);
    // print(tail);

    // deleteNode(tail,7);
    // print(tail);
    bool ans=isCircular(tail);
    if(ans)
    {
        cout<<"IT IS A CIRCULAR LINKLIST"<<endl;

    }
    else
    {
        cout<<"IT IS NOT A CIRCULAR LINKLIST"<<endl;
    }
}
