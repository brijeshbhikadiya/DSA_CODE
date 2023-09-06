//Inorder     Preorder     Postorder
// LNR         NLR           LRN
//L:- going to the left side.
//N:-print a node
//R:-goint to the right side.

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter The Data :"<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter Data For Inserting in left :"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter Data For Inserting in right :"<<data<<endl;
    root->right=buildTree(root->right);

    return root;

}

void Inorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node* root)
{
    //base case
    if(root==NULL)
    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";

}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if (temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                 q.push(temp->left);
            } 

            if(temp->right)
             {
                 q.push(temp->right);
             }
        }
        

       
    }
}

node* buildFromLevelOrder(node* &root)
{
    queue<node*> q;
    //the value of root node :
    cout<<"Enter the Value Of Root Node :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        cout<<"Enter Left Node For "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter Right Node For "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }


}

int main()
{

    node* root=NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root); //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 

  /*
    //createing a tree
    root=buildTree(root);

    levelOrderTraversal(root); //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout<<"Inorder Traversal is :"<<endl;
    Inorder(root);\

    cout<<endl;

    cout<<"Preorder Traversal is :"<<endl;
    Preorder(root);

    cout<<endl;

    cout<<"Postorder Traversal is :"<<endl;
    Postorder(root);
  */  


}