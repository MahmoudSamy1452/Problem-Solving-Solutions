class MyCircularQueue {
    vector<int> v;
    int i = 0, j = 0, count = 0;
public:
    MyCircularQueue(int k) {
        v = vector<int>(k);
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v[j] = value; j = (j + 1) % v.size();
        count++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        i = (i + 1) % v.size();
        count--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return v[i];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        if(j == 0) return v.back();
        else return v[j-1];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == v.size();
    }
};

// k = 2
// [3,4,5]
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */