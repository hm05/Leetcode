class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        unordered_set<int> zeroRows;
        unordered_set<int> zeroColumns;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    zeroRows.insert(i);
                    zeroColumns.insert(j);
                }
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(zeroRows.count(i) || zeroColumns.count(j)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};