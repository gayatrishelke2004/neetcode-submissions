class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() !=t.length())
        {
            return false;
        }
        unordered_map<char,int>mapp;
        unordered_map<char,int>matt;
        for(int i=0;i<s.length();i++)
        {
            mapp[s[i]]++;
            matt[t[i]]++;
        }
        if(mapp!=matt)
        {
            return false;
        }
        return true;
    }
};
