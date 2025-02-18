class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> ans;
        int current = 0;
        int total = r * c;

        // indexs
        int startingR = 0;
        int startingC = 0;
        int endingR = r - 1;
        int endingC = c - 1;
        while (current < total)
        {
            // starting row
            for (int col = startingC; current < total && col <= endingC; col++)
            {
                ans.push_back(matrix[startingR][col]);
                current++;
            }
            startingR++;
            for (int row = startingR; current < total && row <= endingR; row++)
            {
                ans.push_back(matrix[row][endingC]);
                current++;
            }
            endingC--;
            for (int col1 = endingC; current < total && col1 >= startingC; col1--)
            {
                ans.push_back(matrix[endingR][col1]);
                current++;
            }
            endingR--;
            for (int row = endingR; current < total && row >= startingR; row--)
            {
                ans.push_back(matrix[row][startingC]);
                current++;
            }
            startingC++;
        }

        return ans;
    }
};