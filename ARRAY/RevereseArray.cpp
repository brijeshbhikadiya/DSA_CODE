#include<iostream>
using namespace std;

void reverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int size)
{
    cout<<"the reverse array is :"<<endl;
    for(int i=0;i<size;i++)
    {

        cout<<arr[i]<<endl;
    }
}

int main()
{
    int array1[6]={3,2,1,5,6,7};
    int array2[5]={8,9,6,7,4};

    reverseArray(array1,6);
    reverseArray(array2,5);

    printArray(array1,6);
    printArray(array2,5);
}
