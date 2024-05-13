// 861. Score After Flipping Matrix

// Approach: https://leetcode.com/problems/score-after-flipping-matrix/solutions/5153253/easy-intuition/

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        int rows = grid.size();
        int cols = grid[0].size();

        for(int row = 0; row < rows; ++row){
            if(grid[row][0] == 0){
                for(int col = 0; col < cols; ++col){
                    grid[row][col] = ++grid[row][col] % 2;
                }
            }
        }

        for(int col = 0; col < cols; ++col){
            int countZero = 0;
            for(int row = 0; row < rows; ++row){
                if(grid[row][col] == 0)
                    countZero++;
            }
            if(countZero > (rows/2)){
                for(int row = 0; row < rows; ++row){
                    grid[row][col] = ++grid[row][col] % 2;
                }
            }
        }

        int answer = 0;

        for(int row = 0; row < rows; ++row){
            int decimal  = 0;
            for(int col = 0; col < cols; ++col){
                if(grid[row][col] == 1)
                    decimal += pow(2, cols - col - 1);
            }
            answer += decimal;
        }
        return answer;
    }
};