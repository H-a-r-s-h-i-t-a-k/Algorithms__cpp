class Solution
{
public:
    vector<vector<string>> anagrams(vector<string> &arr)
    {
        // code here
        vector<vector<string>> res;

        unordered_map<string, vector<string>> umap;
        for (int i = 0; i < arr.size(); i++)
        {

            string s = arr[i];
            // sort each string in array
            sort(s.begin(), s.end());
            // push original string to same family
            umap[s].push_back(arr[i]);

        } // for

        for (auto item = umap.begin(); item != umap.end(); item++)
        {
            res.push_back(item->second);
        }

        return res;
    }
};