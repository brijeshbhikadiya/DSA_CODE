//this program is code help lecture number is 15 problem no 1. question is comes from a coding ninja.

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum+=arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m||arr[i]>mid)
            {
                return false;
            }
            pageSum+=arr[i];
        }
    }
    return true;


}

int bookAllocate(int arr[],int n,int m)
{
    int s=0;

    int ans=-1;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int e=sum;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    return ans;

}

int main()
{
    int book[4]={10,20,30,40};
    int m=2; //number of student...

   cout<<"the minimum number of pages of maximum student is :" << bookAllocate(book,4,m)<<endl;
}
