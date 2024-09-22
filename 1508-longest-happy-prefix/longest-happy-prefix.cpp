class Solution {
public:
    string longestPrefix(string s) {
        // int ans=0;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        //met 1
        // string ans = "";
        // int n = str.size();
        
        // for (int len = n - 1; len > 0; --len) {
        //     string pre = str.substr(0, len);
        //     string su = str.substr(n - len, len);
            
        //     if (pre == su) {
        //         ans = pre;
        //         break;
        //     }
        // }
        
        // return ans;


        // met 2 using kmp
         int n = s.length();
        vector<int> lps(n, 0);
        int i = 1, j = 0;
        
        while (i < n) {
            if (s[i] == s[j]) {
                lps[i] = j + 1;
                i++;
                j++;
            } else {
                if (j > 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        
        int len = lps[n - 1];
        return s.substr(0, len);
    }
};