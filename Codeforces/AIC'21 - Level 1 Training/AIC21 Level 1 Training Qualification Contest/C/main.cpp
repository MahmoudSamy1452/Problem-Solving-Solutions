#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    long long n;
    cin >> n;
    while(n){
        cout << n%10 << '\n';
        n/=10;
    }
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
