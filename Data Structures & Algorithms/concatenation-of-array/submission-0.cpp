class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
       
        int n=nums.size();
         vector<int>ans(2*n);
        int m=n;
        for(int i=0;i<n;i++)
        {
           ans[i]=nums[i];
           ans[m]=nums[i];
           m++;
        }
        return ans;
    }
};