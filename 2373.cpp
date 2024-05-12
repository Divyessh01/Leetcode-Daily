// 2373. Largest Local Values in a Matrix

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> answer(n-2 , vector<int>(n-2));

        for(int i = 1; i < n-1; ++i){
            for(int j = 1; j < n-1; ++j){
                int maximum = 0;
                for(int a = -1; a <= 1; ++a){
                    for(int b = -1; b <= 1; ++b){
                        maximum = max(grid[i+a][j+b], maximum);
                    }
                }
                answer[i-1][j-1] = maximum;
            }
        }
        return answer;
    }
};