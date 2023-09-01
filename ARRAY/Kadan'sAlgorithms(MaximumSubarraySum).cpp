//this is one of the best kadan's algorithms timecomplexity is o(n);
                                            //kadan's algorithms: agar maximum subarray ka sum nikalana he to this algorithms is used.

                                            // step:-sum=sum+nums[i];
                                            // step2:-maximum nikallo sum or maxi me se
                                            // step 3:-if(sum<0) he to usko 0  akrdo this three step is callled is kadan's algorithms.'

class Solution {
public:
    int maxSubArray(vector<int>& nums) {  

        int sum=0;
        int maxi=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];

            maxi=max(maxi,sum);

            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
        
    }
};