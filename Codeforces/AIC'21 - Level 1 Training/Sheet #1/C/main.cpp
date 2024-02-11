#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    long long a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << '\n';
    cout << a << " * " << b << " = " << a*b << '\n';
    cout << a << " - " << b << " = " << a-b << '\n';
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
