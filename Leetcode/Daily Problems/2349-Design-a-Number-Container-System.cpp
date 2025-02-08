class NumberContainers {
    unordered_map<int, set<int>> num2idx;
    unordered_map<int, int> idx2num;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        int num = idx2num[index]; idx2num[index] = number;
        num2idx[num].erase(index); num2idx[number].insert(index);
    }
    
    int find(int number) {
        if(!num2idx[number].size()) return -1;
        return *num2idx[number].begin();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */