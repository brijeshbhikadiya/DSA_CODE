#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter A Character : ";
    cin>>ch;

    if(ch>='a'&&ch<='z')
    {
        cout<<"this character is a lowercase.";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"this character is a uppercase.";
    }
    else
    {
        cout<<"this character is a digit.";
    }
}
