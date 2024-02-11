#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    double x, y;
    cin >> x >> y;
    if(x == 0 && y == 0)
        cout << "Origem";
    else if(y == 0)
        cout << "Eixo X";
    else if (x == 0)
        cout << "Eixo Y";
    else if (x > 0 and y > 0)
        cout << "Q1";
    else if (x < 0 and y > 0)
        cout << "Q2";
    else if (x < 0 and y < 0)
        cout << "Q3";
    else
        cout << "Q4";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}