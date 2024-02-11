#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    string x; int c = 0, l;

    cin >> l >> x;
    for(auto n : x){
        if(n == '1')
            c--;
        else c++;
    }
    c %= 4;
    if(c<0)
        c+=4;
    char dir[4] = {'E','S', 'W', 'N'};
    cout << dir[c] << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--){
        baroudy14();
    }
}