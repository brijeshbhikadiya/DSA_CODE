//print a prime number.....................

#include<iostream>
using namespace std;
int main()
{
    int n;
    int factor=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            factor++;
        }
    }
    if(factor==2)
    {
        cout<<"this is a prime number"<<endl;
    }
    else
    {
        cout<<"this is a not a prime number"<<endl;
    }

}
