#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n, c = 0;
    cin >> n;
    for(int i = 1;i < n; i++){
        if(!((n-i) % i))
            c++;
    }
    cout << c;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}