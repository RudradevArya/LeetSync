class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0, cnt=0, maxi=0;
        // while(i<n){
        for(i=0;i<n;++i){
            // i++;
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            // cnt++;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};