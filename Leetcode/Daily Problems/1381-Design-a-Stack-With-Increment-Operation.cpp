class CustomStack {
    vector<int> v;
    int pos = 0;
public:
    CustomStack(int maxSize) {
        v.resize(maxSize);
    }
    
    void push(int x) {
        if (v.size() == pos)
            return;
        v[pos++] = x;
    }
    
    int pop() {
        if (pos == 0)
            return -1;
        return v[--pos];
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < min((int)v.size(), k); ++i){
            v[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */