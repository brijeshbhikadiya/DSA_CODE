#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;

    int col;
    cin>>col;

    //kai rows ma ketala element aavshe e ...
    int c[col];
    for(int i=0;i<col;i++)
    {
        cin>>c[i];
    }

    //creating a array.
    int** arr=new int*[col];
    for(int i=0;i<col;i++)
    {
        arr[i]=new int[c[i]];
    }

    //input a array element.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<c[i];j++)
        {
            cin>>arr[i][j];
        }
    }

    //output a array element.
    cout<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<c[i];j++)
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