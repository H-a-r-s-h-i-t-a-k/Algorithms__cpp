struct MinHeapNode
{
    int element;
    int i; // no of array among k
    int j; // no next element in picked arry
};
void swap(MinHeapNode *a, MinHeapNode *b)
{
    MinHeapNode temp = *a;
    *a = *b;
    *b = temp;
}
class MinHeap
{
    MinHeap *harr;
    int size;

public:
    MinHeap(MinHeapNode a[], int size);
    void minHeapify(int i);
    void replacenode(MinHeapNode nw)
    {
        harr[0] = nw;
        minHeapify(0);
    }
    MinHeapNode getmin() { return harr[0]; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
};
MinHeap::MinHeap(MinHeapNode a[], int size)
{
    harr = a;
    size = size;
    int i = (size - 1) / 2;
    while (i >= 0)
    {
        minHeapify(i);
        i--;
    }
}
MinHeap::minHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int small = i;
    if (l < size && harr[small].element > harr[l].element)
    {
        small = l;
    }
    if (r < size && harr[small].element > harr[r].element)
    {
        small = r;
    }
    if (small != i)
    {
        swap(&harr[i], &harr[small]);
        minHeapify(small);
    }
}

class Solution
{
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> res;
        int n = k;
        MinHeapNode *harr = new MinHeapNode(k);
        for (int i = 0; i < k; i++)
        {
            harr[i].element = arr[i][0];
            harr[i].i = i;
            har[i].j = 1;
        }

        MinHeap heap1(harr, k);

        for (int c = 0; c < n * k; c++)
        {
            MinHeapNode root = heap1.getmin();
            res[c] = root.element;

            if (root.j < n)
            {

                root.element = arr[root.i][root.j];
                root.j++;
            }
            else
            {
                root.element = INT_MAX;
            }

            heap1.replacenode(root);
        }

        return res;

        // code here
    }
};