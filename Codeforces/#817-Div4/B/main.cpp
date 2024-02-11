#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int n;
    string r1, r2;
    bool identical = true;
    cin >> n >> r1 >> r2;
    for(int i = 0; i < n; i++) {
        if (!(r1[i] == r2[i] || (r1[i] == 'G' && r2[i] == 'B') || (r2[i] == 'G' && r1[i] == 'B'))){
            identical = false;
            break;
        }
    }
    if(identical)
        cout << "YES" << '\n';
    else cout << "NO" << '\n';
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