#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, x, amount, c = 0;
    char sign;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> sign >> amount;
        if(sign == '+')
            x += amount;
        else if(x >= amount)
            x -= amount;
        else
            c++;
    }
    cout << x << " " << c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}