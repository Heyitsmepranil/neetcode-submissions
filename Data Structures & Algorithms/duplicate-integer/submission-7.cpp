class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
};