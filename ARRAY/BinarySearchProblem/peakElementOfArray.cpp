//code help : lecture 13 question 2 che...


#include<iostream>
using namespace std;

int peakElement(int arr[],int size)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int array1[4]={2,4,5,1};

    cout<<"the peak element of array is"<<peakElement(array1,4)<<endl;
}
