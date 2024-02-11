#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<pair<int, int>> ans(n, make_pair(0,0)), bag;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int k = 0; k < n; k++){
        ans[k].first = v[k];
        ans[k].second = 1;
        for(int i = 0; i < k; i++){
            if(ans[i].second < q || v[i]%2 != v[k]%2) {
                if(ans[k].first < ans[i].first + v[k]){
                    bag.push_back(ans[k]);
                    ans[k].first = ans[i].first + v[k];
                    ans[k].second = v[i] % 2 == v[k] % 2 ? ans[i].second + 1 : 1;
                }
            }
        }
        for(pair<int, int> x : bag){
            if(((x.first%2 == x.second%2) + 1) <= q || v[i]%2 != v[k]%2) {
                ans[k].first = max(ans[k].first, v[i] + v[k]);
                ans[k].second = v[i] % 2 == v[k] % 2 ? 2 : 1;
            }
        }
        for(int i = 0; i < k; i++){
            if(((v[i]%2 == v[k]%2) + 1) <= q || v[i]%2 != v[k]%2) {
                ans[k].first = max(ans[k].first, v[i] + v[k]);
                ans[k].second = v[i] % 2 == v[k] % 2 ? 2 : 1;
            }
        }
    }
    int a = 0;
    for(int i = 0; i< n;i++) {
        a = max(a, ans[i].first);
    }
    cout << a << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}