#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, x, odd = 0, even = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x%2)
            odd++;
        else
            even++;
    }
    if(odd)
        cout << even << '\n';
    else
        cout << -1 << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--){
        baroudy14();
    }
}