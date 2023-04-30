#include<iostream>
using namespace std;

 long long int sqrtInteger(int n)   //long long int aetale ke int jo moto hoy to mid ni rand multiply thaine range ni bahar vay jay.
    {
        int s=0;
        int e=n;

        long long int mid=s+(e-s)/2;
        long long int ans=-1;

        while(s<=e)
        {
            if(mid*mid==n)
            {
                return mid;
            }
            else if(mid*mid>n)
            {
                e=mid-1;
            }
            else
            {
                ans=mid;
                s=mid+1;
            }
             mid=s+(e-s)/2;
        }
        return ans;
    }

    double precisionNumber(int n,int precision,int tempsol)
    {
        double factor=1;
        double ans=tempsol;

        for(int i=0;i<precision;i++)
        {
            factor=factor/10;
            for(double j=ans;j*j<n;j=j+factor)
            {
                ans=j;

            }
        }
        return ans;
    }
int main()
{
        int n;
        cout<<"enter a value of n : "<<endl;
        cin>>n;

        int tempsol=sqrtInteger(n);  //anathi integer part nikalshe .

        cout<<"the sqrt is the number is :"<<precisionNumber(n,3,tempsol)<<endl;  //aanathi pachal na number malshe...
}
