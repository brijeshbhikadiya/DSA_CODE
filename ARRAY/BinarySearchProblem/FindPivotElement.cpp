//code help : lecture 14 question 1 che...
//find the pivot element in the given array .
//pivot element is a minimum element in the given array.

#include<iostream>
using namespace std;

int getPivot(int arr[],int size)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;

    while(start<end)
    {
        if(arr[mid]>=arr[0])
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
    int array1[5]={7,9,1,2,3};  //sorted rotated array.

    cout<<"the pivot element is : "<<getPivot(array1,5)<<endl;
}
