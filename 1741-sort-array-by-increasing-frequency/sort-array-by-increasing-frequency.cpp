
class Solution {
public:
    vector<int> frequencySort(std::vector<int>& nums) {
      
        map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

    
        sort(nums.begin(), nums.end(), [&freqMap](int a, int b) {
            if (freqMap[a] == freqMap[b]) {
                return a > b;
            }
            return freqMap[a] < freqMap[b]; 
        });

        return nums;
    }
};
