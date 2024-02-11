#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, m, c, w, i = 1;
    while(cin >> n >> m >> c && (n || m || c)) {
        n -= 7;
        m -= 7;
        if ((n * m) % 2 && c) {
            w = n * m / 2 + 1;
        } else w = n * m / 2;
        //cout << "Case #" << i << ": " ;
        cout << w << '\n' << flush;
        i++;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("output.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++){
        hayakel();
    }
}