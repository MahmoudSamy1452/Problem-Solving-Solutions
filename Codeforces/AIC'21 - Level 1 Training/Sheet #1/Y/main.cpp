#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long res = a*b %100;
    res *= c;
    res %= 100;
    res *= d;
    res %= 100;
    cout << setfill('0') << setw(2) << res;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}