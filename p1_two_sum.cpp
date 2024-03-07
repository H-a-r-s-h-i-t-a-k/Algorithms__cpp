#include <iostream>
#include <vector>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> final;
        unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hm.find(target - nums[i]) != hm.end())
            {
                final.push_back(hm[target - nums[i]]);
                final.push_back(i);
                return final;
            }
            hm[nums[i]] = i;
        }
        return final;
    }
};

int main()
{

    return 0;
}
