//convert any decimal to binary follow three step:

//1.convert into a bit n&1;
//2.use formula ans=(digit*pow(10,i))+ans
//3.right shift 1 bit.

//if you using modules so complsary bakina element find karva mate divide no use karvanu.
//if you using bit values so complsory use right or left shift.right shift meanas divide by 2 and left shift is multiply by 2.


/*#include<iostream>
#include<math.h>>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;    //101
        //cout<<"bit is "<<bit<<endl;1 0 1
        ans=(bit*pow(10,i))+ans; 1+100=101  this is answer......
        n=n>>1; 10 1 0
        i++;1 2 3
    }
    cout<<ans<<endl;
}*/


//both positive decimal to binary and negative decimal to binary.
#include<iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    if(n<0){
        // if number is negative
        n = n*(-1);
        int ans = decimalToBinary(n);
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    // 2's comp
    newAns = newAns+1;
    cout << newAns << endl;

    } else {
        // if number is positive
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }
}
