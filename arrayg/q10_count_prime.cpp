class Solution
{
public:
    bool prime(int num)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                return 0;
        }
        return 1;
    }
    int countPrimes(int n)
    {
        int count = 0;
        if (n == 1 || n == 0)
            return 0;
        for (int i = 2; i < n; i++)
        {
            if (prime(i))
                count++;
        }
        return count;
    }
};