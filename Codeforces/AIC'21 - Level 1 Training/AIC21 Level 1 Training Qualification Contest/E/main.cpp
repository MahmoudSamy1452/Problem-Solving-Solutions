#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    bool bad = false;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1 or x == 3)
            bad = true;
    }
    if(bad)
        cout << "Bad";
    else
        cout << "Good";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
