#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    ll d = 1, total = 0;
    while(n/d){
        total += n/d;
        n--;
        d++;
        total %= 1000000007;
    }
    cout << total << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("","", stdin);
    //freopen("","", stdout);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}