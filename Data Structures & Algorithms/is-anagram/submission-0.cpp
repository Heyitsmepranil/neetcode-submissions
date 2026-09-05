#include <vector>

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int i,count=0;
        vector <int> c1;
        vector <int> c2;
        if(s.size()!=t.size()) return false;
        for(i=0;i<s.size();i++)
        {
            c1.push_back(s[i]);
            c2.push_back(t[i]);
        }
        sort(c2.begin(),c2.end());
        sort(c1.begin(),c1.end());        
        for(i=0;i<s.size();i++)
        {
            if(c1[i]==c2[i])
            {
                count++;
            }
        }
        if(count==s.size())
        {
            return true;
        }    
        else
        {
            return false;
        }
    }
};
