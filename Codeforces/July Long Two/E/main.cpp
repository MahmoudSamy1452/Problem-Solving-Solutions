#include <bits/stdc++.h>
using namespace std;
long long factadd(long long x){
    if(x == 1)
        return 1;
    return x+factadd(x-1);
}

void solve() {
    long long n, b;
    cin >> n;
    long long c = 0, s = 0;
    for(int i = 0; i < n; i++){
        cin >> b;
        if(b)
            c++;
        else{
            if(c)
                s += factadd(c);
            c = 0;
        }
    }
    if(c)
        s += factadd(c);
    cout << s << "\n";
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