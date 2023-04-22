#include<iostream>
using namespace std;

bool checkSubstring(string abc)
{
    int size=abc.length();
    string s1=abc;
    int i=0;
    while(i<size)
    {
        string r=s1.substr(i,2);
        string s=s1.substr(i,3);
        if(size>47)
        {
            return false;
        }
        else if(r=="47"&&(size<47))
        {
            return true;
        }
        else if(s=="744"&&(size<47))
        {
            return true;
        }
        i++;
    }
    return false;
}
int main()
{
        string abc="777777447777777777";
        bool ans=checkSubstring(abc);

       if(ans)
       {
        cout<<"good";
       }
       else
       {
            cout<<"bad";
       }
}