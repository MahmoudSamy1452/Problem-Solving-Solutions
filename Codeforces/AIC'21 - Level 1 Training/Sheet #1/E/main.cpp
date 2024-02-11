#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <cmath>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    double r;
    cin >> r;
    cout << fixed << setprecision(9) <<  M_PI * r * r;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
