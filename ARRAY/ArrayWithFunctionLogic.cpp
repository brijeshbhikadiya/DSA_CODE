//simple logic of function using input and output of a array.

#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<"the array is :"<<endl;
    for(int i=0;i<size;i++)
    {

        cout<<arr[i]<<endl;
    }
}

int main()
{
    cout<<"Enter a size of a array:"<<endl;
    int size;
    cin>>size;

    int array[10];

    cout<<"Enter a value of a array :"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        cout<<endl;
    }

    printArray(array,size);
}
