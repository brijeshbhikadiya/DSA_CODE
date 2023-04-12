#include<iostream>
using namespace std;

 int setbita(int a)
 {
     int count=0;
     while(a!=0)
     {
         int bit=a&1;
         if(bit==1)
         {
             count++;
         }
         a=a>>1;
     }
     return count;
 }
 int setbitb(int b)
 {
     int count=0;
     while(b!=0)
     {
         int bit=b&1;
         if(bit==1)
         {
             count++;
         }
         b=b>>1;
     }
     return count;
 }



int main()
{
    int a,b;
    cin>>a>>b;

    int ans1=setbita(a);
    int ans2=setbitb(b);

    cout<<"the total number of bits is :"<<ans1+ans2<<endl;
}
