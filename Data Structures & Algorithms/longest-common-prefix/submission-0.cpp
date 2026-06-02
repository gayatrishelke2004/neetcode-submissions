class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string s="";
        string small=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            if(strs[i].size()<small.size())
            {
                small=strs[i];
            }
        }
        int i=0;
        bool br=true;
        while(i<small.length())
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=small[i])
                {
                      br=false;
                      break;
                }
            }
            if(br==false)
            {
                break;
            }
            s+=small[i];
            i++;
        }
        return s;
    }
};