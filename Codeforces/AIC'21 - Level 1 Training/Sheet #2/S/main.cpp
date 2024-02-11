#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n, m, sum = 0;
    cin >> n >> m;
    for(int i = min(n, m) + 1; i < max(n, m); i++) {
        if(i%2)
            sum += i;
    }
    cout << sum << '\n';
}

int main() {
    fio;

    long long t = 1;
    cin >> t;

    while(t--) {
        baroudy14();
    }
}