class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>chars;
        int maxsize =0;
        int i=0;
         int j=0;
        while(j<s.size())
        {
            while(chars.find(s[j])!=chars.end())
            {
                chars.erase(s[i]);
                ++i;
            }
            maxsize=max(maxsize, j-i+1);
            chars.insert(s[j]);
            ++j;
        }

        return maxsize;
        
    }
};