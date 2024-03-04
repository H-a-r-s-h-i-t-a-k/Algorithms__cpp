class MyHashMap
{
    vector<int> map;
    int siz;

public:
    MyHashMap()
    {
        siz = 1e6 + 1;
        map.resize(siz);
        fill(map.begin(), map.end(), -1);
    }

    void put(int key, int value)
    {
        map[key] = value;
    }

    int get(int key)
    {
        return map[key];
    }

    void remove(int key)
    {
        map[key] = -1;
    }
};
