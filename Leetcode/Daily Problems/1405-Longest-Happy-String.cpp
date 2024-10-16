class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;
        pq.push({a, 'a'});
        pq.push({b, 'b'});
        pq.push({c, 'c'});
        string ans;
        while(true) {
            pair<int, char> top = pq.top();
            pq.pop();
            if(!top.first) break;
            cout << ans << endl;
            if(ans.size() >= 2 && ans[ans.size() - 1] == ans[ans.size() - 2] && ans[ans.size() - 1]== top.second){
                cout << "HERE" << endl;
                pair<int, char> secondTop = pq.top();
                pq.pop();
                if(!secondTop.first) return ans;
                ans += secondTop.second;
                secondTop.first--;
                pq.push(secondTop);
            }
            ans += top.second;
            top.first--;
            pq.push(top);
        }
        return ans;
    }
};