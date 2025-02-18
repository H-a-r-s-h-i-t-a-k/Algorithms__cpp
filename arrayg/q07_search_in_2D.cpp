class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int s = 0, e = r * c - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {

            if (matrix[mid / c][mid % c] == target)
            {
                return true;
            }
            else if (matrix[mid / c][mid % c] > target)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }

            mid = s + (e - s) / 2;
        }
        return false;
    }
};