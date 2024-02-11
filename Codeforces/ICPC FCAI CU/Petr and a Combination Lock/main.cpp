#include <bits/stdc++.h>
using namespace std;
int x[15];
void baroudy14(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    for(int mask = 0; mask < (1 << n); mask++)
    {
        int acc = 0;
        for(int i = 0; i < n;i++){
            if((mask >> i) & 1)
                acc += x[i];
            else
                acc -= x[i];
        }
        if(!(acc%360)) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}