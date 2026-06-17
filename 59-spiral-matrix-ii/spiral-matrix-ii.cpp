class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          vector<vector<int>> matrix(n, vector<int>(n));

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;

        int num = 1;

        while(top <= bottom && left <= right)
        {
            // Top Row
            for(int col = left; col <= right; col++)
            {
                matrix[top][col] = num++;
            }
            top++;

            // Right Column
            for(int row = top; row <= bottom; row++)
            {
                matrix[row][right] = num++;
            }
            right--;

            // Bottom Row
            if(top <= bottom)
            {
                for(int col = right; col >= left; col--)
                {
                    matrix[bottom][col] = num++;
                }
                bottom--;
            }

            // Left Column
            if(left <= right)
            {
                for(int row = bottom; row >= top; row--)
                {
                    matrix[row][left] = num++;
                }
                left++;
            }
        }

        return matrix;
    }
};