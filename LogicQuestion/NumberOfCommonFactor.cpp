class Solution {
public:
    int commonFactors(int a, int b) {
        int n=min(a,b);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(a%i==0 and b%i == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
