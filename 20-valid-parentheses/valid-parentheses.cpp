class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        map<char, char> m;
        m['}'] = '{';
        m[')'] = '(';
        m[']'] = '[';
        stack<char> st;

        for(int i=0;i<n;++i){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                st.push(s[i]);
            }
            else if(st.empty()){
                return false;
            }
            else{
                if(st.top() != m[s[i]]){
                    return false;
                }
                st.pop();
            }

        }
        return st.empty();
    }
};