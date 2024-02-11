#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int k, s; long long c = 0;
    cin >> k >> s;
    for(int x = 0; x <= k; x++)
        for(int y = 0; y <= k; y++){
            if(s-x-y >= 0 and s-x-y <= k)
                c++;
        }
    cout << c;
}


int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}