#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int l1, r1, l2, r2, l, r;
    cin >> l1 >> r1 >> l2 >> r2;
    l = max(l1, l2);
    r = min(r1, r2);
    if(l <= r)
        cout << l << " " << r;
    else
        cout << -1;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}