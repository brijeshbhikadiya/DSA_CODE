//linear search algoritham...

#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int array[6]={3,2,5,6,1,9};

    int key;
    cout<<"enter the element to search for :"<<endl;
    cin>>key;

    bool found=linearsearch(array,6,key);

    if(found)
    {
        cout<<"the element are present"<<endl;
    }
    else
    {
        cout<<"the element are absent"<<endl;
    }
}
