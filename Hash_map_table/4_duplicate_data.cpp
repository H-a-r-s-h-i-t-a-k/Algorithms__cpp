#include <vector>
#include <unordered_set>
#include <iostream>
/*
 * Template for using hash set to find duplicates.
 */
bool findDuplicates(vector<int> &keys)
{
    // Replace Type with actual type of your key
    unordered_set<int> hashset;
    for (int key : keys)
    {
        if (hashset.count(key) > 0)
        {
            return true;
        }
        hashset.insert(key);
    }
    return false;
}
int main()
{
    vector<int> one = [ 89, 345, 4, 56, 7, 3, 3, 3, 54, 3, 343, 43, 2, 34 ];
    findDuplicates(one);
}

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> hset;
        for (int key : nums)
        {
            if (hset.count(key) > 0)
            {
                return true;
            }
            hset.insert(key);
        }
        return false;
    }
};