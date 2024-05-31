class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        vector<int> v;
        int left = 0;
        int right = number.size()-1;
        for(int i =0; i<number.size(); i++)
        {
            
            if(number[left] + number[right] ==target)
            {
                return {left + 1, right + 1};
            }
            else if (number[left] + number[right] >target)
            {
                right--;
            }
            else if (number[left] + number[right] <target)
            {
                left++;
            }


        }
        return v;
    }
};