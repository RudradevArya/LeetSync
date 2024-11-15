class Solution {
public:
    int secondHighest(string s) {
        int lar = -1;
        int sec = -1;
        int n  = s.size();

        for(int i=0;i<n;++i){
            if(isdigit(s[i]) && (s[i]-'0')>lar){
                lar = s[i]-'0';
            }
        }
        for(int i=0;i<n;++i){
            if(isdigit(s[i]) && (s[i]-'0')>sec && (s[i]-'0')<lar){
                sec = s[i]-'0';
            }
        }
        return sec;
    }
};