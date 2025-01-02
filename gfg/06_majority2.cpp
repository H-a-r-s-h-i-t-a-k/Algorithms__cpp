class Solution
{
public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int> &arr)
    {
        // Your code goes here.
        vector<int> res;
        int n = arr.size();
        int n1 = 0, n2 = 0, c1 = 0, c2 = 0;
        for (auto a : arr)
        {
            if (n1 == a)
            {
                c1++;
            }
            else if (n2 == a)
            {
                c2++;
            }
            else if (c1 == 0)
            {
                c1++;
                n1 = a;
            }
            else if (c2 == 0)
            {
                c2++;
                n2 = a;
            }
            else
            {
                c1--;
                c2--;
            }
        } // for

        c1 = 0;
        c2 = 0;
        // find the occurence of num1 and num2
        for (auto i : arr)
        {
            if (i == n1)
            {
                c1++;
            }
            if (i == n2)
            {
                c2++;
            }
        } // for

        if (c1 > n / 3)
        {
            res.push_back(n1);
        }
        if (c2 > n / 3)
        {
            res.push_back(n2);
        }
        sort(res.begin(), res.end());
        return res;
    }
};