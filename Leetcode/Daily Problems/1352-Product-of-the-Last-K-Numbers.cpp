class ProductOfNumbers {
    vector<int> prods;
public:
    ProductOfNumbers() {
    }
    
    void add(int num) {
        for(int& prod: prods) prod *= num;
        prods.push_back(num);
    }
    
    int getProduct(int k) {
        return prods[prods.size() - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */