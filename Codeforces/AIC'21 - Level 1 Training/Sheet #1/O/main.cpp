#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    char s; int a, b;
    cin >> a >> s >> b;
    switch (s) {
        case '+':
            cout << a+b;
            break;
        case '*':
            cout << a*b;
            break;
        case '-':
            cout << a-b;
            break;
        default:
            cout << a/b;
    }
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}