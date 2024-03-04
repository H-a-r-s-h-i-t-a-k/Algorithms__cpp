#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;
class MyHashSet
{
    vector<list<int>> st;
    int sz;

public:
    MyHashSet()
    {
        sz = 100000;
        st.resize(sz);
    }
    int hash(int key)
    {
        return key % sz;
    }

    list<int>::iterator search(int key)
    {
        int i = hash(key);
        return find(st[i].begin(), st[i].end(), key);
    }
    void add(int key)
    {
        if (contains(key))
            return;
        int i = hash(key);
        st[i].push_back(key);
    }

    void remove(int key)
    {
        if (contains(key))
        {

            int i = hash(key);
            st[i].erase(search(key));
        }
    }

    bool contains(int key)
    {
        int i = hash(key);
        if (search(key) != st[i].end())
            return true;
        else
            return false;
    }

    // void traverse()
    // {
    //     for (auto vect : st)
    //     {
    //         // Each element of the list is
    //         // a vector itself
    //         list<int> currentVector = vect;

    //         cout << "[ ";

    //         // Printing vector contents
    //         for (auto element : currentVector)
    //             cout << element << ' ';

    //         cout << ']';
    //         cout << '\n';
    //     }
    // }
};

int main()
{
    MyHashSet myHashSet = MyHashSet();
    myHashSet.add(1);      // set = [1]
    myHashSet.add(2);      // set = [1, 2]
    myHashSet.contains(1); // return True
    myHashSet.contains(3); // return False, (not found)
    myHashSet.add(2);      // set = [1, 2]
    myHashSet.contains(2); // return True
    myHashSet.remove(2);   // set = [1]
    myHashSet.contains(2); // return False, (already removed)
    // myHashSet.traverse();
    return 0;
}
