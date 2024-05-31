class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> m;
        vector<int> v;

        for (int num : nums) {
            m[num]++;
        }

        for (const auto& pair : m) {
            if (pair.second == 1) {
                v.push_back(pair.first);
            }
        }

        return v;
    }
};
