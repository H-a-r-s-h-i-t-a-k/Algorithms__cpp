#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    int ans = 0;
    unordered_map<char, int> mp{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}

    };
    string num;
    num = "LCIII";

    for (int i = 0; i < num.size(); i++)
    {
        if (mp[num[i]] < mp[num[i + 1]])
        {
            ans = ans - mp[num[i]];
            
        }
        else
        {
            ans = ans + mp[num[i]];
           
        }
    }

    return 0;
}