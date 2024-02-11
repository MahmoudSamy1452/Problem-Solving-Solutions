#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int a, b;
    cin >> a >> b;
    cout << max(max(a+b, a-b), a*b);
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