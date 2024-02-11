#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string* x = new string[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int c = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(x[i][j] == 'W') {
                if (i < n - 1 && x[i + 1][j] == 'P') {
                    c++;
                    x[i + 1][j] = '.';
                    continue;
                }
                if (i > 0 && x[i - 1][j] == 'P') {
                    c++;
                    x[i - 1][j] = '.';
                    continue;
                }
                if (j > 0 && x[i][j - 1] == 'P') {
                    c++;
                    x[i][j - 1] = '.';
                    continue;
                }
                if (j < m - 1 && x[i][j + 1] == 'P') {
                    c++;
                    x[i][j + 1] = '.';
                    continue;
                }
            }
        }
    }
    cout << c;
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