#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+((end-start)/2);   //aa mid aetala mate che kem ke mid int ni range ni bhar vay no jay..



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

int main()
{
    int even[6]={2,4,8,9,16,24};
    int odd[5]={3,4,5,6,7};

    int evenindex=binarySearch(even,6,16);

    cout<<"index is :"<<evenindex<<endl;

    int oddindex=binarySearch(odd,5,9);

    cout<<"index is :"<<oddindex<<endl;
}
