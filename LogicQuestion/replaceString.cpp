
//question:-One String Are Given Ex:- my name is brijesh and replace a @40 of given String space.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string replaceString(string s)
{
    string temp="";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string str="my name is brijesh";
    
   cout<<replaceString(str)<<endl;

}
