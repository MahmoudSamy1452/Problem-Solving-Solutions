#include <bits/stdc++.h>
#define ll long long
#define pi 3.14159265359
#define EPS = 1e-6
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve(){
    int n, d, m, f;
    cin >> n >> d;
    vector<pair<int, int>> v;
    for(int i = 0;i < n; i++) {
        cin >> m >> f;
        v.push_back(make_pair(m, f));
    }
    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b){
        return a.first <= b.first;
    });
    ll sum = 0, i = 0, j = 0, ans = 0;
    while(j < n){
        sum += v[j].second;
        while(v[j].first - v[i].first >= d){
            sum -= v[i].second;
            i++;
        }
        ans = max(ans, sum);
        j++;
    }
    cout << ans;
}

int main() {
    fast

    int t = 1;
    //cin >> t;

    while(t--){
        solve();
    }
}
