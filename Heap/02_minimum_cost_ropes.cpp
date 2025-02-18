
class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    int minCost(vector<int> &arr)
    {
        // //code here
        priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());

        int res = 0;

        while (pq.size() > 1)
        {

            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            res = res + a + b;
            pq.push(a + b);
        }
        return res;
    }
};
