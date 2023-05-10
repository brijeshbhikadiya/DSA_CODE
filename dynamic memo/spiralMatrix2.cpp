class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int index = 1;

       

        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
            while(left<=right && top<=bottom)
            {
                 for(int j=left;j<=right;j++)
                    {
                        ans[top][j]=index++;
                    }
                 top++;

                 for(int i=top;i<=bottom;i++)
                     {
                        ans[i][right]=index;
                        index++;
                     }
                 right--;

        
                for(int j=right;j>=left;j--)
                    {
                        ans[bottom][j]=index;
                        index++;
                    }
                 bottom--;

                 for(int i=bottom;i>=top;i--)
                     {
                         ans[i][left]=index;
                         index++;
                     }
                 left++;
             }
           
        return ans;

    }
};