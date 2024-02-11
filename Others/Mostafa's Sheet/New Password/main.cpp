#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, c = 0;
    cin >> n >> k;

    for(int i = 0; c < n;i++)
    {
        cout << (char)('a'+i);
        c++;
        if(i == k-1)
            i = -1;
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