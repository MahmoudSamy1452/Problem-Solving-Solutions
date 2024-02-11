#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int suma = 0, sumb = 0;
    string a, b;
    cin >> a >> b;

    for(auto x : a)
        suma += x-'0';
    for(auto x : b)
        sumb += x-'0';
    cout << max(suma, sumb);
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