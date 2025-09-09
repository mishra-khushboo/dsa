class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int x = 1;
        int y = 1;

        for(int i = 0; i < n ;i++){
            if(mat[0][i] == 0){
                x =0;
            }
        }
        for(int j = 0; j < m;j++){
            if(mat[j][0] == 0){
                y = 0;
            }
        }
        for(int i = 1;i< m;i++){
            for(int j = 1; j < n ;j++){
                if(mat[i][j] == 0){
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }
        for(int i = 1;i<n;i++){
            if(mat[0][i] == 0){
                for(int j = 1;j<m;j++){
                    mat[j][i] =0;
                }
            }
        }
        for(int j = 1;j<m;j++){
            if(mat[j][0] == 0){
                for(int i = 1;i<n;i++){
                    mat[j][i] =0;
                }
            }
        }
        if(x == 0){
            for(int i = 0;i<n;i++){
                mat[0][i] = 0;
            }
        }
        if(y == 0){
            for(int j = 0;j<m;j++){
                mat[j][0] = 0;
            }
        }
        //  unordered_set<int> rows, cols;

        // for( int i =0; i < m; i++){
        //     for(int j = 0;j<n;j++){
        //         if( matrix[i][j] == 0){
        //             rows.insert(i);
        //             cols.insert(j);
        //         }  
        //     }
        // }
        // for(int i =0;i < m; i++){
        //     for(int j = 0; j <n;j++){
        //         if(rows.count(i) > 0 || cols.count(j) > 0){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    }
};