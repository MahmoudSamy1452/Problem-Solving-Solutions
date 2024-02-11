#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    double a, b;
    cin >> a >> b;
    cout << "floor " << a << " / " << b << " = " << floor(a/b) << '\n';
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << '\n';
    cout << "round " << a << " / " << b << " = " << round(a/b) << '\n';
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}