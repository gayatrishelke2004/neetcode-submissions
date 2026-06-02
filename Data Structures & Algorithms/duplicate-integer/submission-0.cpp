#include<unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            mapp[nums[i]]++;
        }
        for(auto& i:mapp)
        {
            if(i.second >=2)
            {
                return true;
            }
        }
        return false;
    }
};