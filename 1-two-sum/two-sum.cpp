class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> v;
    // //    vector< pair <int,int> > ans;
     vector<int> ans;
    //     for(int i = 0; i<nums.size(); i++)
    //     {
    //       v.push_back(target-nums[i]);
    //     }

    //     for(int i=0; i<nums.size(); i++) 
    //     {
    //         for(int j = 0; j<nums.size(); j++)
    //     {
    //       if(v[i]==nums[j])
    //       {
    //         //  ans.first(i);
    //         //  ans.second(j);
    //         ans.push_back(i);
    //         ans.push_back(j);
    //         return v;
    //       }
    //     }

    //     }
        
    //    return v;
        
    for(int i=0; i<nums.size(); i++)
    {
        for(int j =i+1; j<nums.size(); j++)
        {
            
            if(nums[i]+nums[j]==target)
            {
                
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }















    return ans;

    }
};