#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n, m;
    while(cin >> n >> m && n > 0 && m > 0) {
        int sum = 0;
        for (int i = min(n, m); i <= max(n, m); i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << '\n';
    }
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}