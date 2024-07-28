class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int nearS = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n;++i){
            int p1=i+1;
            int p2=n-1;

            while(p1<p2){
                int currS = nums[i] + nums[p1] + nums[p2];
                if(abs(currS-target)==abs(nearS-target)){
                    nearS = max(currS,nearS);
                }else if(abs(currS-target)<abs(nearS-target)){
                    nearS = currS;
                }


                if(nums[i] + nums[p1] + nums[p2]< target){
                    p1++;
                }else{
                    p2--;
                }
            }
        }
        return nearS;
    }
};