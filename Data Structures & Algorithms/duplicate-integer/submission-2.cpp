#include<unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            if(mapp.count(nums[i]))
               return true;
            mapp[nums[i]];
        }
        return false;
    }
};