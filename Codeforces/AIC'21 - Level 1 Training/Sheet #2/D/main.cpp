#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n;
    while(cin >> n){
        if (n == 1999)
        {
            cout << "Correct" << '\n';
            return;
        } else cout << "Wrong" << '\n';
    }
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}