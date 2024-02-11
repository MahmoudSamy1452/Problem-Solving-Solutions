#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n;

    map<int, vector<int>> mp;

    for(int i = 1; i <= n; i++){
        cin >> x;
        mp[x].push_back(i);
    }

    int min = INT_MAX;
    for(auto& v : mp)
        if(v.second.size() < min)
            min = v.second.size();

    if(mp.size() < 3)
        min = 0;

    cout << min << '\n';

    for(int i = 0; i < min;i++){
        for(auto& v : mp){
            cout << *(v.second.end()-1) << " ";
            v.second.pop_back();
        }
        cout << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}