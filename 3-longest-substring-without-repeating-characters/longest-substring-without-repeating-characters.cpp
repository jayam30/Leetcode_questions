class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        int maxLength =0;
        unordered_set<char>charSet;
        int i=0;
        for(int j=0; j<n; j++)
        {
            if(charSet.count(s[j])==0)
            {
                charSet.insert(s[j]);
                maxLength = max(maxLength,j-i+1 );

            }
            else{
                while(charSet.count(s[j]))
                {
                    charSet.erase(s[i]);
                    i++;
                }
                charSet.insert(s[j]);

            }
        }
        return maxLength;
    }
};