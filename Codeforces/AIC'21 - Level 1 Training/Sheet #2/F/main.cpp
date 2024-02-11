#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

long long baroudy14(long long n){
    if(n <= 1)
        return 1;
    return n * baroudy14(n-1);

}

int main() {
    fio;

    long long x, t = 1;
    cin >> t;

    while(t--) {
        cin >> x;
        cout << baroudy14(x) << '\n';
    }
}