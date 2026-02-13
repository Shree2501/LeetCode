class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 1; i < nums.size(); i++) {
        int j = 0;
        while(j < i){
            if (nums[i] + nums[j] == target)
                return {i, j};
            j++;
        }
        
    }
    return {};
    }
};