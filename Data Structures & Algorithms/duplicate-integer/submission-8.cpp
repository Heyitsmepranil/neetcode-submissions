class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int i;
        sort(nums.begin(),nums.end());
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }
        return false;
    }
};