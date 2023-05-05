
class Solution {
public:
bool c(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;
        return false;
    }
    int maxVowels(string s, int k) {
       
    
        int ans=0;
        int mx=0;
        for(int i=0;i<k;i++){
            if(c(s[i]))mx++;
        }
        ans=mx;
        int j=k,i=0;
        while(j<s.size()){
            if(c(s[j]))mx++;
            if(c(s[i]))mx--;
            ans=max(ans,mx);
            j++;
            i++;
        }
        return ans;
        }
    
};