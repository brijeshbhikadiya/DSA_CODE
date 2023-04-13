/*
here the code of compliment number :
first of fall find a mask:
mask=0;
have aapde jayre compliment kariye tayre : 32 bit number hoy  5:00......00101 ~5:1111111......11010 but aapde jota che
khali last 3 digit so kaik karvu padshe to mask find karyu.

how to calculate mask:
~5:11111111....11010
mask:0000000000000.....111 have aa bane no aapde & kariye to aapdne joito ans mali jay. mate
mask find karva logic:  n ma jetala element hoy aetala mask ma 1 karvana aetale pachi and karshu to aavi jashe ans.
   
    while(n!=0)
    {
        mask=(mask<<1)|1;   aavu karish aetale uper nu mask lakhelu mali jashe...
        n=n>>1;  
    }

have mask and ~n and n nu and gate karishu so aapdne final ans mali jashe.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int mask=0;
    if(n==0)
    {
        cout<<"0"<<endl;
    }
    while(n!=0)
    {
        mask=(mask<<1)|1;
        n=n>>1;
    }
    int ans=(~n)&mask;
    cout<<ans<<endl;
}
