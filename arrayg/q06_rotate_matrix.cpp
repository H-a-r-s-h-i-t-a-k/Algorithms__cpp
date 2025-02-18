class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        ranges::reverse(matrix);
        int n = matrix.size();
        for (int r = 0; r < n; r++)
        {
            for (int c = r; c < n; c++)
            {
                swap(matrix[r][c], matrix[c][r]);
            }
        }
    }
};
