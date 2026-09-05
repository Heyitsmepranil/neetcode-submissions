#include <vector>

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int i,count=0;

        if(s.size()!=t.size()) return false;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       
        for(i=0;i<s.size();i++)
        {
            if(s[i]==t[i])
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
