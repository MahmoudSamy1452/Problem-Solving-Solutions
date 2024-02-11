#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    cout << n/365 << " years" << '\n';
    n %= 365;
    cout << n/30 << " months" << '\n';
    n %= 30;
    cout << n << " days" << '\n';
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}