#include<bits/stdc++.h>
using namespace std;
void reversestring(string &s)
{
    int start=0;
    int end=s.size()-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
int main()
{
    string s;
    cout<<"Enter a String :"<<endl;
    cin>>s;
    string original=s;
    reversestring(s);
    if(original==s)
    {
        cout<<"string is palindrome."<<endl;
    }
    else{
        cout<<"string is not a palindrome."<<endl;
    }
}