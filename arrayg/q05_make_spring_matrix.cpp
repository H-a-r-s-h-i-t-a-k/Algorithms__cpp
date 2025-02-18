class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int r = n;
        int c = n;

        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int current = 1;
        int total = n * n;

        // indexs
        int startingR = 0;
        int startingC = 0;
        int endingR = r - 1;
        int endingC = c - 1;
        while (current <= total)
        {
            // starting row
            for (int col = startingC; current <= total && col <= endingC; col++)
            {
                matrix[startingR][col] = current;
                current++;
            }
            startingR++;
            for (int row = startingR; current <= total && row <= endingR; row++)
            {
                matrix[row][endingC] = current;

                current++;
            }
            endingC--;
            for (int col1 = endingC; current <= total && col1 >= startingC; col1--)
            {
                matrix[endingR][col1] = current;

                current++;
            }
            endingR--;
            for (int row = endingR; current <= total && row >= startingR; row--)
            {
                matrix[row][startingC] = current;

                current++;
            }
            startingC++;
        }

        return matrix;
    }
};
