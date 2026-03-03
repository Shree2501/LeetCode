class Solution {
public:
    bool isValid(vector <int> &nums, int n, int k, int maxAllocation){
        int stu = 1, pages = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > maxAllocation){
                return false;
            }

            if(pages + nums[i] <= maxAllocation){
                pages += nums[i];
            }
            else{
                stu++;
                pages = nums[i];
            }
        }
        return stu > k ? false : true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
        return -1;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int st = 0;
    int end = sum;
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isValid(nums,n,k,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
    }
};