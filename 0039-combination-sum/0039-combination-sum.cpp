class Solution {
public:
    set<vector<int>> s;
    void getAllCombin(vector<int>& arr, int i,  vector<int> combin, int target, vector<vector<int>> &ans){
        if(i == arr.size() || target<0){
            return;
        }
        if(target == 0){
            if(s.find(combin) == s.end()){
                ans.push_back({combin});
                s.insert(combin);
            }
            return;
        }

        combin.push_back(arr[i]);
        getAllCombin(arr, i+1, combin, target-arr[i], ans);
        getAllCombin(arr, i, combin, target-arr[i], ans);
        combin.pop_back();
        getAllCombin(arr, i+1, combin, target, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        getAllCombin(arr, 0, combin, target, ans);
        return ans;
    }
};