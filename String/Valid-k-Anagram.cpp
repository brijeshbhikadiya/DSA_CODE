class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        
        if(str1.size()!=str2.size()) return false;
        
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        
        for(auto ch:str1)
        {
            cnt1[ch-'a']++;
        }
        
        
        for(auto ch:str2)
        {
            cnt2[ch-'a']++;
        }
        
        
        int cntdiff=0;
        for(int i=0;i<26;i++)
        {
            cntdiff+=abs(cnt1[i]-cnt2[i]);
        }
        
        return (cntdiff<=2*k);
    }
};