#include<iostream>
using namespace std;
void selectSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

void printArray(int arr[],int size)
{
    cout<<"the sorted array is :";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int array1[5]={6,7,3,4,1};

    selectSort(array1,5);
    printArray(array1,5);
}
