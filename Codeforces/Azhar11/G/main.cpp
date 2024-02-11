#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t = 0, f = 0, n, x;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> x;
        if(x == 25)
            t++;
        else if(x == 50 && t)
        {
            t--;
            f++;
        }
        else if(x == 100){
            if(t >= 1 && f >= 1)
            {
                t--;
                f--;
            }
            else if(t >= 3)
            {
                t-=3;
            }
            else {
                cout << "NO";
                return;
            }
        }
        else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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