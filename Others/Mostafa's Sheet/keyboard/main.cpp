#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    char dir;
    cin >> dir;
    string a[3] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./)"}, s;
    cin >> s;
    for(auto& x : s){
        for(int i = 0; i < 3;i++) {
            auto j = a[i].find(x);
            if (j != string::npos) {
                if (dir == 'R')
                    cout << a[i][j - 1];
                else cout << a[i][j + 1];
                break;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        Baroudy14();
    }
}