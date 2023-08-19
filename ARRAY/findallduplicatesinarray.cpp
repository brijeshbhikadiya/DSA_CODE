class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> res;
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count==2)
                {
                    res.push_back(nums[i]);
                }
                count=1;
            }
            else
            {
                count=1;
            }
        }
        sort(res.begin(),res.end());
        return res;
        
    }
};
