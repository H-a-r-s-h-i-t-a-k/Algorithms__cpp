

class Solution
{
public:
    void heapify(vector<int> &arr, int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[largest] < arr[left])
        {
            largest = left;
        }
        if (right < n && arr[largest] < arr[right])
        {
            largest = right;
        }
        if (largest != i)
        {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // your code here
        // merge both array into one
        vector<int> ans;

        for (auto i : a)
            ans.push_back(i);
        for (auto i : b)
            ans.push_back(i);
        // build heap using merge array
        int size = ans.size();
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(ans, size, i);
        }
        return ans;
    }
};

///////////////////////////////////////////////

void maxHeapify(vector<int> &arr, int n, int ind)
{

    if (ind > n)
        return;
    int max = 0;
    int l = 2 * ind + 1;
    int r = 2 * ind + 2;

    if (l < n && arr[ind] < arr[l])
    {
        max = l;
    }
    else
    {
        max = ind;
    }
    if (r < n && arr[ind] < arr[r])
    {
        max = r;
    }

    if (max != ind)
    {
        swap(arr[max], arr[ind]);
        maxHeapify(arr, n, max);
    }
}

void buidHeap(vector<int> &arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        maxHeapify(arr, n, i);
    }
}

class Solution
{
public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
    {
        // your code here
        vector<int> mer(n + m, 0);
        for (int i = 0; i < n; i++)
        {
            mer[i] = a[i];
        }
        for (int i = 0; i < m; i++)
        {
            mer[n + i] = b[i];
        }
        buidHeap(mer, n + m);

        return mer;
    }
};