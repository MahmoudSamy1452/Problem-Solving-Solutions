#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    long long n, b, d, x, s = 0, ans = 0;
    cin >> n >> b >> d;

    for(int i = 0 ; i < n; i++) {
        cin >> x;
        if (x <= b)
            s += x;
        if (s > d) {
        ans++;
        s = 0;
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}