class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
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
       int m = mat.size();
        int n = mat[0].size();
        int firstRowZero = 1, firstColZero = 1;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (mat[0][j] == 0) firstRowZero = 0;
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (mat[i][0] == 0) firstColZero = 0;
        }

        // Use first row & column as markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (mat[i][j] == 0) {
                    mat[i][0] = 0;
                    mat[0][j] = 0;
                }
            }
        }

        // Set zeros based on column markers
        for (int j = 1; j < n; j++) {
            if (mat[0][j] == 0) {
                for (int i = 1; i < m; i++) {
                    mat[i][j] = 0;
                }
            }
        }

        // Set zeros based on row markers
        for (int i = 1; i < m; i++) {
            if (mat[i][0] == 0) {
                for (int j = 1; j < n; j++) {
                    mat[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero == 0) {
            for (int j = 0; j < n; j++) {
                mat[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero == 0) {
            for (int i = 0; i < m; i++) {
                mat[i][0] = 0;
            }
        }
    }
};