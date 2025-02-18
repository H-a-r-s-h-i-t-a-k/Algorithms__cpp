#include <bits/stdc++.h>
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int c = 0; c < mCols; c++)
    {
        if (c & 1)
        {
            for (int r = nRows - 1; r >= 0; r--)
            {
                // printf("%d ",arr[r][c]);
                ans.push_back(arr[r][c]);
                // cout<<arr[r][c]<<" ";
            }
        }
        else
        {
            for (int r = 0; r < nRows; r++)
            {
                ans.push_back(arr[r][c]);
            }
        }
    }
    return ans;
}