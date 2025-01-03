class Solution
{
public:
    long subarrayXor(vector<int> &arr, int k)
    {
        // code here
        long res = 0;
        unordered_map<int, int> pmap;
        int prefsum = 0;
        for (auto i : arr)
        {
            prefsum = prefsum ^ i;

            res = res + pmap[prefsum ^ k];

            if (k == prefsum)
            {
                res++;
            }
            pmap[prefsum]++;
        }

        return res;
    }
};