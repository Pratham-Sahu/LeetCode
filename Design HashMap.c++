class MyHashMap {
private:
    struct KeyValue {
        int key;
        int value;
        KeyValue(int k, int v) : key(k), value(v) {}
    };
    
    const int SIZE = 10000;  
    std::vector<std::vector<KeyValue>> table;

public:
    MyHashMap() {
        table.resize(SIZE);
    }
    
    void put(int key, int value) {
        int index = key % SIZE;
        for (auto& kv : table[index]) {
            if (kv.key == key) {
                kv.value = value;  
                return;
            }
        }
        table[index].emplace_back(key, value); 
    }
    
    int get(int key) {
        int index = key % SIZE;
        for (const auto& kv : table[index]) {
            if (kv.key == key) {
                return kv.value;  
            }
        }
        return -1;  
    }
    
    void remove(int key) {
        int index = key % SIZE;
        auto& bucket = table[index];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->key == key) {
                bucket.erase(it);  
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
