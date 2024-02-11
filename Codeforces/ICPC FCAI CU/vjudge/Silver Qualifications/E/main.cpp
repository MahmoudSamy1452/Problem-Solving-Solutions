#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int x, n, odd_c = 0;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> x;
        if(x%2)
            odd_c++;
    }
    if(odd_c % 2  || (!(odd_c % 2) && odd_c > 0 && n > odd_c))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
        baroudy14();
}
