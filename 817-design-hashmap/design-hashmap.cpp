class MyHashMap {
public:
    int freq[1000001];
    MyHashMap() {
        memset(freq,-1,sizeof(freq));
    }
    
    void put(int key, int value) {
        freq[key]=value;
    }
    
    int get(int key) {
        return freq[key];
    }
    
    void remove(int key) {
        freq[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */