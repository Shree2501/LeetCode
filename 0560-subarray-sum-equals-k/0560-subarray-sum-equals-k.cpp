class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> PreSum(n,0);
        PreSum[0] = nums[0];

        for(int i=1; i<n; i++){
            PreSum[i] = PreSum[i-1] + nums[i];
        }

        unordered_map<int, int> m;
        for(int j=0; j<n; j++){
            if(PreSum[j] == k) count++;
            int val = PreSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }
            if(m.find(PreSum[j]) == m.end()){
                m[PreSum[j]] = 0;
            }
            m[PreSum[j]]++;
        }
        return count;
    }
};