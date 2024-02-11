#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void baroudy14(){
    int a, b;
    cin >> a >> b;
    for(int i = b-a; i > 0; i--){
        int first = (b/i)*(i), second = first - i;
        if(second >= a) {
            cout << i;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
