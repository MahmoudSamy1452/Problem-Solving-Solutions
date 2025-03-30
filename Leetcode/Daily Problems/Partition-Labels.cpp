class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> freq(26, 0), visited(26, false), ans;
        for(char& c: s) freq[c-'a']++;
        int charsInPartition = 0, cnt = 0;
        for(char& c: s) {
            int i = c-'a';
            if(!visited[i]) charsInPartition++;
            visited[i] = true;
            if(--freq[i] == 0) charsInPartition--;
            cnt++;
            if(!charsInPartition) {
                ans.push_back(cnt); cnt = 0; 
            }
        }
        return ans;
    }
};