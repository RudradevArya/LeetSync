class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int res = -2147483648, maxi = 1, maxj = 1 ;

        for(int i=0;i<n;++i){
            if(maxi == 0){
                maxi = 1;
            }
            if(maxj == 0){
                maxj = 1;
            }

            maxi *= nums[i];
            maxj *= nums[n-i-1];
            res = max({res,maxi,maxj});
        }
        return res;
        
    }
};