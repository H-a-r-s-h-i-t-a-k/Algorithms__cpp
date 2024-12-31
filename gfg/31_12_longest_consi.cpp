class Solution
{
public:
    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int> &arr)
    {
        // Your code here
        unordered_set<int> numset;
        int res = 0;
        for (int num : arr)
            numset.insert(num);

        for (int num : arr)
        {
            if (numset.find(num) != numset.end() && numset.find(num - 1) == numset.end())
            {
                int curr = num, cnt = 0;

                while (numset.find(curr) != numset.end())
                {
                    numset.erase(curr);
                    curr++;
                    cnt++;

                } // while

                res = max(res, cnt);
            } // if

        } // for
        return res;
    }
};