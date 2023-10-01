#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter the start Number"<<endl;
    cin>>start;
    cout<<"Enter the End Number"<<endl;
    cin>>end;

    for(int i=start;i<=end;i++)
    {
        if(i==0||i==1)
        {
            continue;
        }

        int flag=1;

        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }

        if(flag==1)
        {
             cout<<i<<endl;
        }    
    }
}