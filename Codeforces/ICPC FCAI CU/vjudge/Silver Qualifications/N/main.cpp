#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int f[3000] = {0};
int k = 0, m = 0;

void baroudy14(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long lcm = (c*d)/__gcd(c,d);
    long long div_by_c = b/c - (a-1)/c, div_by_d = b/d - (a-1)/d, div_by_lcm = b/lcm - (a-1)/lcm;
    cout << b-a+1 - div_by_c - div_by_d + div_by_lcm;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
