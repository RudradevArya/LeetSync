class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();

        vector<vector<int>> res;

        sort(arr.begin(), arr.end());

        for(int i=0; i<n;++i){
            if(res.empty() || res.back()[1] < arr[i][0]){
                res.push_back(arr[i]);
            }//else if(res.back()[0] < arr[i][0]){
            //     res.back()[0] = min(res.back()[0], arr[i][0]);
            //}
            else{
                res.back()[1] = max(res.back()[1], arr[i][1]);
            }
        }
        return res;
    }
};