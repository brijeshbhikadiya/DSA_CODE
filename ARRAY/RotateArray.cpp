class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k)%nums.size()]=nums[i];   //temp lidho kem ke jo nums ma karshu to override thai jase aetale temp ma store karine nums ma store kari didhu.
        }
        nums=temp;

        //tem[(i+k)%nums.size()]=means ke this is logic where we can rotate the array.
    }
};