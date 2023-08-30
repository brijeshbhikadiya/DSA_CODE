class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        // set<int> st;   //brute force
        // for(int i=0;i<nums.size();i++)
        // {
        //     st.insert(nums[i]);
        // }
        // int index=0;
        // for(auto it:st)
        // {
        //     nums[index]=it;
        //     index++;
        // }
        // return index;

        //optimal
        int i=0;
        for(int j=1;j<arr.size();j++)\
        {
            if(arr[j]!=arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};