class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        // Code Here
        int lar = -1, sec_lar = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            // find largest
            if (lar < arr[i])
            {
                sec_lar = lar;
                lar = arr[i];

            } // if
            else if (lar > arr[i] && arr[i] > sec_lar)
            {

                sec_lar = arr[i];
            }

        } // for

        return sec_lar;
    }
};