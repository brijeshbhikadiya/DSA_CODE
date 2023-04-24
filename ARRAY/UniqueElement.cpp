#include<iostream>
using namespace std;

int uniqueElement(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
                        //main logic xor = je same element hare karvi koy no to e 0 thay jase
                          //or 0 ni sathe game aeno karvo aeno ans e element pote aavi jashe.
    }
    return ans;
}

int main()
{
    int array1[7]={2,3,2,3,7,5,5};

    cout<<"unique element is : "<<uniqueElement(array1,5)<<endl;




}
