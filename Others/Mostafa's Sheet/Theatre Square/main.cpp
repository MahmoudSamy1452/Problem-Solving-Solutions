#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long long n, m, a;
    cin >> n >> m >> a;
    if(n%a)
        n = n/a +1;
    else
        n = n/a;

    if(m%a)
        m = m/a +1;
    else
        m = m/a;
    cout << n * m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        baroudy14();
    }
}