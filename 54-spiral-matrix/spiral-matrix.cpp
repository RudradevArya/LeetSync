class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int T=0, B=m-1, L=0, R=n-1;
        vector<int> res;

        if(matrix.empty() || matrix[0].empty()){
            return res;
        }

        while(L<=R && T<=B){
            //Left
            for(int j=L;j<=R;++j){
                res.push_back(matrix[T][j]);
            }
            T++;

            //Dowm
            for(int i=T;i<=B;++i){
                res.push_back(matrix[i][R]);
            }
            R--;

            //lemft
            if(T<=B){
                for(int j=R;j>=L;j--){
                    res.push_back(matrix[B][j]);
                }    
                B--;
            }
            

            //up
            if(L<=R){
                for(int j=B;j>=T;j--){
                    res.push_back(matrix[j][L]);
                }    
                L++;
            }
        }
        return res;
    }
};