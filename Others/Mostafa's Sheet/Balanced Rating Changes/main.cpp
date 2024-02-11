#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, x, round = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%2 && x < 0) {
            if (round <= 0) {
                round++;
                cout << x / 2 << '\n'; // round up - 0 or greater
            } else {
                round--;
                cout << (x - 1) / 2 << '\n'; // round down - less than 0
            }
        } else if(x%2 && x > 0){
            if (round > 0) {
                round--;
                cout << x / 2 << '\n'; // round down - less than 0
            } else {
                cout << (x + 1) / 2 << '\n'; // round up - 0 or greter
                round++;
            }
        } else
            cout << x/2 << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}