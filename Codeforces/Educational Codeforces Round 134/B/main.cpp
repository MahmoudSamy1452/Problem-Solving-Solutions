#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;
    if((sx + d >= n && sx - d <= 0) || (sy + d >= m && sy - d <= 0) || (sx + d >= n && sy + d >= m)){
        cout << -1 << '\n';
        return;
    }
    cout << n-1 + m-1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        hayakel();
    }
}