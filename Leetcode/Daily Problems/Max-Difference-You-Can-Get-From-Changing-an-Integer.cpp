class Solution {
public:
    int maxDiff(int num) {
        string minNum = to_string(num); int n = minNum.size();
        char toChange;
        for(int i = 0; i < n; i++) if(minNum[i] != ((i == 0 || minNum[0] == minNum[i]) ? '1' : '0')) {toChange = minNum[i]; break;}
        for(int i = n - 1; i >= 0; i--) {
            if(minNum[i] == toChange) {
                minNum[i] = ((minNum[0] == toChange) ? '1' : '0');
            }
        }
        cout << minNum << endl;
        
        string maxNum = to_string(num);
        for(int i = 0; i < n; i++) if(maxNum[i] != '9') {toChange = maxNum[i]; break;}
        for(int i = 0; i < n; i++) {
            if(maxNum[i] == toChange) {
                maxNum[i] = '9';
            }
        }
        cout << maxNum << endl;

        return stoi(maxNum) - stoi(minNum);
    }
};