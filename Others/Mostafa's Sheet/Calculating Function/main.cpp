#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long long n;
    cin >> n;
    if(n%2)
        cout << n/2 - n;
    else
        cout << n/2;
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