class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //trasnpose
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //revrser rows for clockwise
        //revsers col for anti clock
        for(int j=0;j<n;++j){
            for(int i=0, k=n-1;i<k;++i, k--){
                swap(matrix[j][i], matrix[j][k]);
            }
        }
    }
};