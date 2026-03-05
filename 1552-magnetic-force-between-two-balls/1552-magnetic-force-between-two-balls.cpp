class Solution {
public:
    bool isPossible(vector <int> &position, int n, int m, int minBalls){
        int balls = 1, last_pos = position[0];
        for( int i = 1; i < n; i++){
            if((position[i] - last_pos) >= minBalls){
                balls++;
                last_pos = position[i];
            }
            if(balls == m){
            return true;
            }
        }
        return false;
    } 
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int st = 1, end = position[n-1] - position[0];
         int ans = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(isPossible(position, n, m, mid)){
                ans = mid;
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
};