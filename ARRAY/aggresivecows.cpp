//this program is code help lecture number is 15 problem no 2. question is comes from a coding ninja.

#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid)
{
    int cowsCount=1;
    int lastPosition=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastPosition>=mid)
        {
            cowsCount++;
            if(cowsCount==m)
            {
                return true;
            }
            lastPosition=arr[i];
        }
    }
    return false;
}

int aggresiveCows(int arr[],int n,int m)
{

   for(int i=0;i<n;i++)   //sorting logic 
   {
       for(int j=0;j<n-1-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
               swap(arr[j],arr[j+1]);
           }
       }
   }
    int s=0;

    int ans=-1;

    int maxi=-1;

    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }

    int e=maxi;

    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;

}

int main()
{
    int stalls[5]={4,2,1,3,6};
    int m=2; //number of cows...

   cout<<"the maximum number of distance between two cows are  :" << aggresiveCows(stalls,5,m)<<endl;
}
