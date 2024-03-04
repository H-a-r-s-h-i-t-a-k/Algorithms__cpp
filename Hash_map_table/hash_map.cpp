#include <iostream>
#include <vector>
#include <list>
class MyHashSet
{
    std::vector<list<int>> st;
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
};

/**
