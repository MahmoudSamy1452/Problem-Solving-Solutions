#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int x, ans = 0;
    cin >> x;
    while(x > 0)
    {
        if(x%2)
            ans++;
        x/=2;
    }
    cout << ans;
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