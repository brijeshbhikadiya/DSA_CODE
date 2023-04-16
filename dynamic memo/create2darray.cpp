#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creating a array.
    int** arr=new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    //input a array element.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    //output a array element.
    cout<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    //deleteing a array beacuse i save all element in heap memory.
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }
    

    delete []arr;

 

}