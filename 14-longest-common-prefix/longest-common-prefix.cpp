class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        int n=strs.size();
        int minL = strs[0].size();
        for(int i=0;i<n;++i){
            if(strs[i].size() < minL){
                minL=strs[i].size();
            }
        }

        string res;
        char curr;

        for(int i=0;i<minL;++i){
            curr=strs[0][i];
            for(int j=0;j<n;++j){
                if(strs[j][i]!=curr){
                    if(res.empty()){
                        return "";
                    }else{
                        return res;
                    }
                }
            }
            res.push_back(curr);
        }
        if(res.empty()){
            return "";
        }else{
            return res;
        }
    }
};