
// Sieve of Eratosthenes optime prime  count
class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> arr(n + 1, true);
        arr[0] = false;
        arr[1] = false;
        int c = 0;
        for (int i = 2; i < n; i++)
        {
            if (arr[i])
            {
                c++;
                for (int j = 2 * i; j < n; j = j + i)
                {
                    arr[j] = false;
                }
            }
        }
        return c;
    }
};
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