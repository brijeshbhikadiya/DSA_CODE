#include <bits/stdc++.h>
using namespace std;
void duplicate(string s)
{
   unordered_map<char, int> count;
   for(int i=0;i<s.size();i++)
   {
    count[s[i]]++;
   }

   for(auto it:count)
   {
    if(it.second>1)
    {
        cout<<it.first<<endl;
    }
   }

}
int main()
{
    string s1="prakashh";
    duplicate(s1);
    return 0;
}