class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> cnt1(26,0);

        for(auto ch:s)
        {
            cnt1[ch-'a']++;
        } 
        
        for(auto ch:t)
        {
            cnt1[ch-'a']--;
        } 

       for(int val:cnt1)
       {
           if(val!=0)
           {
               return false;
           }
       }
       return true;
    }
};