//convert any binary to decimal follow three step:

//1.find last bit using modulas;
//2.use formula ans=(last bit*pow(2,i))+ans
//3.find remanining part by / and repeat.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n%10;
        ans=(bit*pow(2,i))+ans;
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
}
