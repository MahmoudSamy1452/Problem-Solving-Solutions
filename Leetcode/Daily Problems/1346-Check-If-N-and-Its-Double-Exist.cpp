class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int& e: arr) mp[e]++;
        for(int& e: arr) if(mp[2*e]-(e == 0)) return true;
        return false;
    }
};