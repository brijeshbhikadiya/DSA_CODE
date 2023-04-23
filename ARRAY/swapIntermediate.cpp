#include<iostream>
using namespace std;

void swapIntermediate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)  //and aa i=i+2 karvanu logic remember rakhvanu...
    {
        if(i+1<size)  //bus aatlu logic yad rakhavu...
        {
            //with swap function
            //swap(arr[i],arr[i+1]);

            //without swap function
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}


int main()
{
    int even[8]={2,3,4,8,5,6,7,8};
    int odd[5]={4,2,6,7,5};

    swapIntermediate(even,8);
    printArray(even,8);

    cout<<endl;

    swapIntermediate(odd,5);
    printArray(odd,5);
}
