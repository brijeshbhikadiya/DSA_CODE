//print the all prime number between two values...

#include<iostream>
using namespace std;
int main()
{
    int low,high;
    int check;
    cout<<"enter a low number"<<endl;
    cin>>low;
    cout<<"enter a high number"<<endl;
    cin>>high;
    for(int i=low;i<high;i++)
    {
        check=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check++;
                break;
            }
        }
        if(check==0)
        {
            cout<<i<<endl;
        }
    }

}

