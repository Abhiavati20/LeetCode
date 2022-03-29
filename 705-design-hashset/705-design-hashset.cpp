class MyHashSet {
public:
    vector<int> M;
    MyHashSet() {
        int s = 1e6 + 1;
        M.resize(s);
    }
    
    void add(int key) {
        M[key] = 1;
    }
    
    void remove(int key) {
        M[key] = 0;
    }
    
    bool contains(int key) {
        return M[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */