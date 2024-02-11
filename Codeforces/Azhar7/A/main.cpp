#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string w;
    cin >> w;
    if(w.length()>26)
    {
        cout << -1;
        return;
    }
    int *c = new int[30];
    int ans = 0;
    for(int i = 0; i < 30; i++)
        c[i] = 0;
    for(auto& x : w){
        if(!c[x-'a'])
            c[x-'a']++;
        else ans++;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
}