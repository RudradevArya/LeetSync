class Solution {
public:
char addi(char c1, char c2, int &carr){
        if(c1 == '0' && c2 == '0'){
            if(carr){
                carr = 0;
                return '1';
            }else{
                return '0';
            }
        }
        
        else if((c1 == '1' && c2 == '0') || (c1 == '0' && c2 == '1')){
            if(carr){
                // carr = 1;
                return '0';
            }else{
                return '1';
            }
        }
        
        if(c1 == '1' && c2 == '1'){
            if(carr){
                // carr = 1;
                return '1';
            }else{
                carr = 1;
                return '0';
            }
        }  
        return '0';
    }
    string addBinary(string a, string b) {
        string res = "";
        int n = a.size() - 1, m = b.size() - 1;
        int e1 = 0, e2 = 0;
        int carr = 0;
        
        // if(a.size() < 2 || b.size() < 2){
        //     auto ans = addi(a[n], b[n], carr);
        //     res += ans;
        // }
        //removbing leading 0's
        while(e1 < a.size() && a[e1] == '0'){
            e1++;
        }
        while(e2 < b.size() && b[e2] == '0'){
            e2++;
        }
        
        
        //from last ele to leading zero and adding
        while(n >= e1 && m >= e2){
            auto ans = addi(a[n],b[m], carr);
            
            // if(ans){
            //     res += "1";
            // }else{
            //     res += "0";
            // }
            res += ans;
            
            --n;
            --m;
        }
        
        //if any ele left 
        while(n >= e1){
            auto ans = addi(a[n],'0', carr);
            
            // if(ans){
            //     res += "1";
            // }else{
            //     res += "0";
            // }
            res += ans;
            --n;
        }
        
        while(m >= e2){
            auto ans = addi('0',b[m], carr);
            
            // if(ans){
            //     res += "1";
            // }else{
            //     res += "0";
            // }
            res += ans;
            --m;
        }
        
        if(carr){
            res += "1";
        }
        if (res.empty()) {
            return "0";
        }
        reverse(res.begin(), res.end());
        return res;

        
    }
};