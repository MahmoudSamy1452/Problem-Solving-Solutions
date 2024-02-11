#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << -1;
        return;
    }
    for(int i = 2; i <= n; i+=2){
        cout << i << '\n';
    }
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}