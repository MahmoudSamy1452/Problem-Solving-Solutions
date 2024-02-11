#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    char a = v[0][0], b = v[0][1];
    if(a == b)
    {
        cout << "NO";
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == i || j == n-1-i) {
                if (v[i][j] != a) {
                    cout << "NO";
                    return;
                }
            } else if(v[i][j] != b)
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        baroudy14();
    }
}