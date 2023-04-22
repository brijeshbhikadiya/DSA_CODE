#include<iostream>
using namespace std;

int sumArray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int array1[6]={1,3,4,-1,5,6};

    cout<<"total sum of all elememnt is : "<< sumArray(array1,6) <<endl;
}
