#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    float n; cin >> n;
    if((int)n != n)
        cout << "float " << (int)n << " " << n-(int)n;
    else
        cout << "int " << (int)n;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}