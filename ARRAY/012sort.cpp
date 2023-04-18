//sort a array element by 012 .....

#include<iostream>
using namespace std;

/*void sort012(int arr[], int n)
{
    int currIndex = 0;
    int left = 0;
    int right = n - 1;

    while (currIndex <= right)
    {
    	if (arr[currIndex] == 0) {
            swap(arr[currIndex], arr[left]);
            currIndex++;
            left++;
        }
        else if (arr[currIndex] == 1)
            currIndex++;
        else
        {
            swap(arr[currIndex], arr[right]);
            right--;
        }
    }
}*/

void sort012(int arr[],int size) //bucket sort thi karyo....
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main()
{
    int array1[7]={0,0,1,2,0,1,1};

    sort012(array1,7);
    printArray(array1,7);
}
