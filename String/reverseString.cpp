#include<iostream>
#include<vector>
using namespace std;

string reverseString(string s)
{
        int start=0;
        int end=s.length()-1;
        while(start<end)
        {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
}
vector<int> convertStirngToInt(string s)
    {
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            ans.push_back(i-'a');
        }
        return ans;
    }

int main()
{
    string s = "hello";
    
    cout << reverseString(s) << endl;
    cout<<s.length()<<endl;
        int a='b'-'a';
    cout<<a;
    vector<int> ans=convertStirngToInt(s);
    for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
    revrse(s.begin(),s.end());
}
    