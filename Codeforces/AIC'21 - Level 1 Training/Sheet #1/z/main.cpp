#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b*log(a)> d*log(c))
        cout << "YES";
    else
        cout << "NO";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}