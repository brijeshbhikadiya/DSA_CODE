//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    string ones[20]={"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen "};
    string tens[10]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};
    
    string numToWords(int n,string s)
    {
        string str="";
        if(n>19)
        {
            str += tens[n/10]+ones[n%10];
        }
        else
        {
            str += ones[n];
        }
        if(n)
        {
            str += s;
        }
        return str;
    }
    
    string convertToWords(long n) {
        // code here
        string res;
        res+=numToWords(n/10000000,"crore ");
        res+=numToWords((n/100000)%100,"lakh ");
        res+=numToWords((n/1000)%100,"thousand ");
        res+=numToWords((n/100)%10,"hundred ");
        if(n>100 && n%100)
        {
            res+="and ";
        }
        res+=numToWords((n%100),"");
        return res;
    }
    
    
    
};

//{ Driver Code Starts.

int main() {
    
    cout<<"Enter A Number"<<endl;
        long n;
        cin >> n;
        Solution ob;
        auto ans = ob.convertToWords(n);
        cout << ans << "\n";
    return 0;
}
// } Driver Code Ends



