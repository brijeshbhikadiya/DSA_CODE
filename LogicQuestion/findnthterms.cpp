#include<iostream>
using namespace std;

int nthterms(int n)
{
    return (3*n+7);
}

int main()
{
    int n;
    cin>>n;

    cout<<"the nth terms is :"<<nthterms(n)<<endl;
}
