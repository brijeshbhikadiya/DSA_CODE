class Solution {
public:
    bool rotateString(string s, string goal) {
        
        for(int i=0;i<s.size();i++)
        {
            goal.push_back(goal[0]);
            goal.erase(0,1);
            if(goal==s)
            {
                return true;
            }
        }
        return false;
    }
};
