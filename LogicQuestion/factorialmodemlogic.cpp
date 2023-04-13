#include<iostream>
using namespace std;

int factorialMod(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        int ans=n*factorialMod(n-1);
        return ans;
    }


}

int main()
{
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;

    int mode;
    cout<<"enter a value of mode"<<endl;
    cin>>mode;

    cout<<"the factorial mod m is :"<<factorialMod(number)%mode<<endl;


}
