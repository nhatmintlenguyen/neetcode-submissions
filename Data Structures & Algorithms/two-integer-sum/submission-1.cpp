class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 2 && (nums[0] + nums[1] == target)) return {0,1}; 
        map<int, int>index; 
        // in the map first int store the value of nums 
        //  second nums store the remaining value of target we need to find in the nums 
        for(int i = 0; i < nums.size(); i++)
        {
            int remain = target - nums[i]; 
            
            if(index.find(remain) != index.end())
            {
                return {index.at(remain), i}; 
            }
            index.insert({nums[i], i});
        }
        return {};
    }
};