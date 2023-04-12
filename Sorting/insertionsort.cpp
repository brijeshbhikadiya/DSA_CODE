#include<iostream>
using namespace std;
void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void printArray(int arr[],int size)
{
    cout<<"the sorted array are :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int array1[4]={4,12,11,20};

    insertionSort(array1,4);
    printArray(array1,4);
}
