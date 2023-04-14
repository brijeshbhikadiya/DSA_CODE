/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0;
    while(n!=0)
    {
        int digit = n%10;
        ans=(ans*10)+digit;  //this formula change original number to reverse number.
        n=n/10;
    }
    cout<<ans<<endl;
}*/


/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0,i=0;
    while(n!=0)
    {
        int digit = n%10;
        ans=(digit*pow(10,i))+ans;  //this formula change original number to same to same original number.
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0;
    while(n!=0)
    {
        int digit = n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN)
        {
            cout<<"0"<<endl;
        }
        ans=(ans*10)+digit;  //this formula change original number to reverse number.
        n=n/10;
    }
    cout<<ans<<endl;
}
