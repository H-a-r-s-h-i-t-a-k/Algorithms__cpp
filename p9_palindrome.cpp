#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(int x)
{
    string str = to_string(x);
    if (to_string(x) == string(str.rbegin(), str.rend()))
    {
        return true;
    }
    return false;
}
int main()
{
    signed int num = 131;
    cout << isPalindrome(num);
    // string str1 = string(str.rbegin(), str.rend());

    return 0;
}
