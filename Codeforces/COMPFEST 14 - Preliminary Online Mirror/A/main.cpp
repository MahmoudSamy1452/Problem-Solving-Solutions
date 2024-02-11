#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    unsigned long long n, m;
    cin >> n >> m;
    if(m == 1){
        cout << n-1;
        return;
    }
    cout << (m-1)* n;
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