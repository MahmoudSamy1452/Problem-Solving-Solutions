#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int x, p, q;
    cin >> x >> p >> q;
    cout << (p-q)*x << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        Baroudy14();
    }
}