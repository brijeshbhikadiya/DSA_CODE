//find the element in sorted rotated array.
//code help : lecture 14 question 2 che...

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

int binarySearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;

    int mid=start+((end-start)/2);

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }

         mid=start+((end-start)/2);
    }
    return -1;
}


void findPosition(int arr[],int size,int target)
{
    int pivot=getPivot(arr,size);

    if(target>=arr[pivot]&&target<=arr[size-1])
    {
        cout<<"the value of index is tho find is :"<<binarySearch(arr,pivot,size-1,target)<<endl;
    }
    else{
        cout<<"the value of index is tho find is :"<<binarySearch(arr,0,pivot-1,target)<<endl;
    }
}

int main()
{
    int array1[6]={4,5,6,1,2,3};

    findPosition(array1,6,4);

}
