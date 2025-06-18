class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int nHouses = houses.size(), nHeaters = heaters.size(), ans = 0, absDiff = 0, curHeaterIdx = 0;
        for(int i = 0; i < nHouses; i++) {
            absDiff = abs(houses[i] - heaters[curHeaterIdx]); 
            while(curHeaterIdx + 1 < nHeaters &&  abs(houses[i] - heaters[curHeaterIdx + 1]) <= absDiff) {
                absDiff = abs(houses[i] - heaters[curHeaterIdx + 1]);
                curHeaterIdx++;
            }
            ans = max(ans, absDiff);
        }
        return ans;
    }
};