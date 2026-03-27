class Solution {
public:
    int binarySearch(vector<int> arr,int tar, int st, int end){
        int mid = st + (end - st)/2;
        if(st <= end){
            if(arr[mid] == tar){
                return mid;
            }
            else if(arr[mid] > tar){
                return binarySearch(arr,tar,st,mid-1);
            }
            else{
                return binarySearch(arr,tar,mid+1,end);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums,target,0,nums.size()-1);
    }
};