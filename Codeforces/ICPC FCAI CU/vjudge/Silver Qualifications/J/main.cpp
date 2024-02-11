#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void baroudy14(){
    map<long long, long long> mp;
    long long a, b, n, r, avg, total = 0, ans = 0;
    cin >> n >> r >> avg;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        total += a;
        mp[b] += r-a;
    }
    long long needed = (avg * n - total > 0) ? avg * n - total : 0;
    for(auto x : mp){
        if(needed) {
            ans += x.first * min(needed, x.second);
            needed -= min(needed, x.second);
        }
        else {
            cout << ans;
            return;
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
