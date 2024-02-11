#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    string s = "*";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << setw(n+i) << s << '\n';
        s += "**";
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