#include<iostream>
using namespace std;

bool isVowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<=j)
        {
            if(isVowel(s[i]) && isVowel(s[j]))
            {
                char ch=s[i];
                s[i]=s[j];
                s[j]=ch;
                i++;
                j--;
            }
            else if(isVowel(s[i]) && !isVowel(s[j]))
            {
                j--;
            }
             else if(!isVowel(s[i]) && isVowel(s[j]))
            {
                i++;   
            }
            else
            {
                i++;
                j--;
            }
        }

        return s;
    }
int main()
{
    string s = "hello";
    cout << reverseVowels(s) << endl;
}
    