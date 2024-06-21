#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
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
                cout << i << endl;
                final.push_back(i);
                return final;
            }
            hm[nums[i]] = i;
        }
        vector<int>::iterator it;
        for (it = final.begin(); it != final.end(); it++)
        {
            cout << *it << endl;
        }
        return final;
    }
};

int main()
{
    Solution s1;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 4, 5, 6, 7, 8, 7, 7, 8, 9, 6};
    vec = s1.twoSum(vec, 14);
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
