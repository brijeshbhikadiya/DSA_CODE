/*#include<iostream>
#include<string>
using namespace std;

string reverseWordString(string s)
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

string ReverseWordArray1(string s1)
{
    string temp="";
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==' ')
        {
            reverseWordString(s1);
        }
        else if(s1[i]=='\0')
        {

            reverseWordString(s1);
        }
        return s1;
    }

}

int main()
{
    string str="THE SKY IS BLUE";
    string str2=reverseWordString(str);
    cout<<"Reverse String is :"<<str2<<endl;

    string str3=ReverseWordArray1(str2);
    cout<<"The Original Reverse String is :"<<str3<<endl;
}



@ijunedaslam
2 months ago
55:06 - Reverse words (Question 5)*/

//The strlen() function in C++ returns the length of the given C-string. It is defined in the cstring header file.
#include<iostream>
#include<cstring>
#include <algorithm>

using namespace std;

void reverse_words(char* s) {
  // Reverse the entire string
  int start = 0, end =strlen(s) - 1;
  while (start < end) {
    swap(s[start], s[end]);
    start++;
    end--;
  }

  // Reverse each word in the string
  start = 0;
  for (int current = 0; current < strlen(s); current++) {
    if (s[current] == ' ') {
      continue;
    }
    start = current;
    while (s[current] != ' ' && current < strlen(s)) {
      current++;
    }
    end = current - 1;
    while (start < end) {
      swap(s[start], s[end]);
      start++;
      end--;
    }
  }
}

int main(){

   char s[]= "my name is juned";
   //cin>>s;

   reverse_words(s);
   cout<<s;

   return 0;
}
