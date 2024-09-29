class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int s1=0,s2=0;

        for(int i=0;i<n;++i){
            s1+=nums[i];
        }
        for(int i=0;i<n;++i){
            if(s2 == s1 - s2 - nums[i]){
                return i;
            }
            s2 += nums[i];
        }
        return -1;
    }
};