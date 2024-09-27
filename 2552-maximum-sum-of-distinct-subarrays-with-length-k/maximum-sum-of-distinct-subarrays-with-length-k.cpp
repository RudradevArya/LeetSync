class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> q;
        vector<int> res;
        long long maxi=0,curr=0;
        set<int> win;
        int s=0;

        for(int i=0;i<n;++i){
            curr+=nums[i];

            while(win.count(nums[i])){
                curr-=nums[s];
                win.erase(nums[s]);
                s++;
            }
            win.insert(nums[i]);
            if(i-s+1==k){
                maxi = max(maxi,curr);
                curr-=nums[s];
                win.erase(nums[s]);
                s++;
            }
        }
        return maxi;
    }
};