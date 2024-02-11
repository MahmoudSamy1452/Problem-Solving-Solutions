#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string w;
    cin >> w;
    int* ind = new int[n/2];
    int c = 0, ans = 0;
    for(int i = 0; i < n/2; i++){
        if(w[i] != w[n-i-1]){
             ind[c] = i;
             c++;
        }
    }
    int x;
    char y;
    bool found = false;
    for(int i = 0; i < m; i++) {
        found = false;
        cin >> x >> y;
        w[x-1] = y;
        if(n%2 && x == n/2 +1 && !c){
            ans++;
            continue;
        }
        for (int j = 0; j < c; j++){
            if (x-1 == ind[j]){
                found = true;
                if(w[n - ind[j]-1] == y) {
                    ans++;
                    ind[j] = ind[c-1];
                    c--;
                }
                continue;
            }
            if (ind[j] == n - x){
                found = true;
                if(w[ind[j]] == y) {
                    ans++;
                    ind[j] = ind[c-1];
                    c--;
                }
                continue;
            }
        }
        if(!found){
            ind[c] = (x>n/2)? n-x : x-1;
            c++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}