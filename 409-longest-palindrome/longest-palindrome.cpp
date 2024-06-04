class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int>m;
        int cnt=0;
        int odd=0;
        for(auto i:s)
        {
            m[i]++;
        }

         for (auto it = m.begin(); it != m.end(); ++it)
          {
            if (it->second % 2 == 0) {
                cnt =(it->second)+cnt;
            }
            else
            {
                odd=odd+1;
                cnt += it->second - 1;
            }
            
          }
          if(odd>0)
          {
            cnt = cnt+1;
          }
          

        return cnt;
    }
};