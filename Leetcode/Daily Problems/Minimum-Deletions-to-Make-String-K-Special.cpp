class Solution {
    void debug(vector<int>& v) {
        for(int& e: v) cout << e << " ";
        cout << endl;
    }
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26, 0), ffreq(word.size() + 1, 0);
        for(char& c: word) freq[c-'a']++;
        for(int& f: freq) ffreq[f]++;

        int toRemove = 0, next = 0; 
        for(int i = k+2; i < ffreq.size(); i++) {
            toRemove += (i-k-1) * ffreq[i];
            next += ffreq[i];
        }

        int mn = toRemove;
        for(int i = k+2; i <= word.size(); i++) {
            toRemove += ffreq[i-k-1] * (i-k-1) - next;
            next -= ffreq[i];
            mn = min(toRemove, mn);
        }
        return mn;
    }
};