#include<iostream>
using namespace std;                //t.c is O(n^2)
//void bubbleSort(int arr[],int size) //this is not optimize solution beacuse alredy sorted hase to pan badha mate check karshe.
//{
    //for(int i=0;i<size-1;i++)  //ahiya size-1 kem ke last element to alredy sorted hase.
    //{
        //for(int j=0;j<size-1-i;j++)  //ahiya size-1 kem ke aapdo chelo element a[j] malshe pan a[j+1] index out of bound vay
                                    //jashe aetale n-1 lagi javanu and size-1-i kem ke aek aek round ma aek aek element sort thato jay che.
        //{
            //if(arr[j]>arr[j+1])
            //{
                //swap(arr[j],arr[j+1]);
            //}
        //}
    //}
//}
                                    //t.c is 0(n);
void bubbleSort(int arr[],int size) //this is optimize solution beacuse alredy sorted hase to pan badha mate check nahi karshe break karshe loop karshe.
{
    for(int i=0;i<size-1;i++)  //ahiya size-1 kem ke last element to alredy sorted hase.
    {
        bool swapped=false;
        for(int j=0;j<size-1-i;j++)  //ahiya size-1 kem ke aapdo chelo element a[j] malshe pan a[j+1] index out of bound vay
                                     //jashe aetale n-1 lagi javanu and size-1-i kem ke aek aek round ma aek aek element sort thato jay che.
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}

void printArray(int arr[],int size)
{
    cout<<"the sorted array are ; "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int array1[6]={6,7,4,5,1,2};

    bubbleSort(array1,6);
    printArray(array1,6);
}
