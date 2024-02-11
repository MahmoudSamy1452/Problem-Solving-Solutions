#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    char x;
    cin >> x;
    if(x >= '0' && x <= '9')
        cout << "IS DIGIT";
    else if(x >= 'a' && x <= 'z')
        cout << "ALPHA" << '\n' << "IS SMALL";
    else
        cout << "ALPHA" << '\n' << "IS CAPITAL";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}