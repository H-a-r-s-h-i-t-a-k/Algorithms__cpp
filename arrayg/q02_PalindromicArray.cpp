#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int arr[], int n)
{
    bool ans = 1;
    int x = 0;
    while (x < n)
    {
        string numb = to_string(arr[x]);
        int i = 0, j = 0;
        for (int i = 0; i <= ((numb.size() / 2) + 1); i++)
        {
            j = numb.size() - i - 1;

            if (numb.at(i) != numb.at(j))
            {
                ans = false;
                return 0;
            }
        }

        x++;
    }

    return 1;
}

int main()
{

    int n = 4, arr[] = {111, 222, 3373, 444};

    cout << isPalindrome(arr, n) << endl;
    return 0;
}