#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
}


int main()
{
    int positon;
    cout<<"Enter a Position : "<<endl;
    cin>>positon;

    cout<<fib(positon);
}
