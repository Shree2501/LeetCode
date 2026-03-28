class Solution {
public:
    void getAllSubsets(vector<int> &arr,vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i==arr.size()){
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        getAllSubsets(arr,ans,i+1,allSubsets);
        ans.pop_back();
        int idx = i+1;
        while(idx < arr.size() && arr[idx] == arr[idx-1]){
            idx++;
        }
        getAllSubsets(arr,ans,idx,allSubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        vector<vector<int>> allSubsets;
        getAllSubsets(arr,ans,0,allSubsets);
        return allSubsets;
    }
};