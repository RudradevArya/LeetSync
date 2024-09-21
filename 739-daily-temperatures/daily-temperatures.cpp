class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = temperatures.size();
        stack<int> st;
        vector<int> res(n,0);
        
        for(int i=0;i<n;++i){
            while(!st.empty() 
            && temperatures[st.top()] <temperatures[i]){
                int idx = st.top();
                res[idx] = i - idx;
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
    
};