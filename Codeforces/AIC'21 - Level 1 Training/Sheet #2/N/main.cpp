#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    char op;
    cin >> op;
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        while(x--)
            cout << op;
        cout << '\n';
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