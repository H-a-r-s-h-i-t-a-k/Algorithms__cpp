class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size() - 1;

        int r = 0, c = col;

        while (r < row && c >= 0)
        {
            int element = matrix[r][c];
            if (element == target)
            {
                return 1;
            }
            else if (element < target)
                r++;
            else
                c--;
        }
        return 0;
    }
};