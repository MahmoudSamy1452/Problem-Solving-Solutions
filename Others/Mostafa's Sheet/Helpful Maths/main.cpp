#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> v;
    string w;
    cin >> w;
    for(auto& x : w)
        if(x >= '1' && x <='3')
            v.push_back(x-'0');
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i<v.size()-1)
            cout << '+';
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