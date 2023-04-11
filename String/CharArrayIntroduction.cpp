#include<iostream>
using namespace std;

char toLowercase(char charcter)
{
    if(charcter>='a'&&charcter<='z')
    {
        return charcter;
    }
    else
    {             //'B'-'A'=1+'a'='b' so its convert loowercase.
        char temp=charcter-'A'+'a';     //aani jagyyae uppercase ma convert karvu hoy to
                                        //charcter-'a'+'A';
        return temp;
    }
}

/*bool isPalindrome(char name[],int n) //aa code jayare case sensitive kidhu hoy tayre use thase . noon hase to true but Noon to false aavshe kem ke case sensitive che.
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        if(name[start]!=name[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}*/


bool isPalindrome(char name[],int n)   //this code use for not  a case sensitive.
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        if(toLowercase(name[start])!=toLowercase(name[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

void reverseCharArray(char name[],int n)
{
   int start=0;
   int  end=n-1;
   while(start<end)
   {
       swap(name[start],name[end]);
       start++;
       end--;
   }
}

int getLength(char name[]) //char array ma size no aapvani kem ke jayre aene null string malshe aetale stop thay jashe.
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter Your Name :";
    cin>>name;

    //name[2]='\0';  //character ma jayare null aavu tayre stop thy javanu mate aaa case ma only br j print thase.

    cout<<"Your name is : "<<name<<endl;

    int len=getLength(name);

    cout<<"The Length Of Your Name Is : "<<len<<endl;

    cout<<"Palindrome or Not : "<<isPalindrome(name,len)<<endl;

    reverseCharArray(name,len);

    cout<<"Reverse name is : "<<name<<endl;

    cout<<"The Character Is : "<<toLowercase('b')<<endl;

    cout<<"The Character Is : "<<toLowercase('B')<<endl;




}
