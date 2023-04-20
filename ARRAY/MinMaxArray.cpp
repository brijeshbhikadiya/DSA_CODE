#include<iostream>
using namespace std;

int maxArray(int arr[],int size)
{
    int max=INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int minArray(int arr[],int size)
{
    int min=INT64_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}


int main()
{
        int array[10]={2,5,7,8,-3,5,-2,1,18,32};

        cout<<"maximum element is:"<<maxArray(array,10)<<endl;
        cout<<"minimum element is:"<<minArray(array,10)<<endl;
}
