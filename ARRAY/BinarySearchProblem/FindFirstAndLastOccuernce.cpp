//code help : lecture 13 question 1 che...
//find the first and last occurrence of the given sorting array.


#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int lastocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;

    int mid=start+(end-start)/2;

    while(start<=end)
    {
        if(key==arr[mid])
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}



int main()
{
    int array1[9]={2,2,3,3,3,3,3,4,5};

    cout<<"first occurrence index is :"<<firstocc(array1,9,3)<<endl;
    cout<<"last occurrence index is :"<<lastocc(array1,9,3);
}
