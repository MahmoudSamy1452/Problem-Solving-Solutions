#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void baroudy14(){
    long long n, m, s = 0;
    cin >> n >> m;
    if(!m){
        cout << 1;
        return;
    }
    vector<int> x(m+2);
    x[0] = 0;
    x[m+1] = n+1;
    for(int i = 0; i < m; i++)
        cin >> x[i];
    sort(x.begin(), x.end());
    int min_diff = INT_MAX;
    for(int i = 1; i < m+2; i++){
        min_diff = (x[i]-x[i-1]-1 > 0) ? (min(min_diff, x[i]-x[i-1]-1)) : min_diff;
    }
    for(int i = 1; i < m+2; i++){
        s += (x[i]-x[i-1]-1)%min_diff ? (x[i]-x[i-1]-1)/min_diff + 1 : (x[i]-x[i-1]-1)/min_diff;
    }
    cout << s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
