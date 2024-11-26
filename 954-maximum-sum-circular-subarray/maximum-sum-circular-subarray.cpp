class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, curr=0;
        for(int i=0;i<n;++i){
            curr = max(nums[i], nums[i] + curr);
            maxi = max(curr,maxi);
        }

        int mini = INT_MAX, currm = 0, tot = 0;
        for(int i=0;i<n;++i){
            currm = min(nums[i], nums[i] + currm);
            mini = min(currm,mini);
            tot += nums[i];
        }

        if(tot == mini){
            return maxi;
        }
        return max(tot-mini, maxi);
    }
};