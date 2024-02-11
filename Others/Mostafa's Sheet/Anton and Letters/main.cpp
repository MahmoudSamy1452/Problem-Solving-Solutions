#include <bits/stdc++.h>
using namespace std;

void solve(){
    set<char> s;
    string w;
    getline(cin,w);
    for(auto& x : w)
        if(x >= 'a' && x <= 'z')
            s.insert(x);
    cout << s.size();
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