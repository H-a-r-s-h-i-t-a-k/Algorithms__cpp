class Solution
{
public:
    int waysToSplitArray(vector<int> &nums)
    {
        long long leftsum = 0, rightsum = 0;
        int cnt = 0;
        for (auto i : nums)
        {
            rightsum += i;
        }
        for (int i = 0; i < nums.size() - 1; i++)
        {
            leftsum += nums[i];
            rightsum -= nums[i];
            if (leftsum >= rightsum)
            {
                cnt++;
            }
        }
        return cnt;
    }
};