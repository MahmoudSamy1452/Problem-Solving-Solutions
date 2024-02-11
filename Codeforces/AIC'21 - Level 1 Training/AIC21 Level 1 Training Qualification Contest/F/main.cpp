#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n, c = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bool equal = true;
            for(int k = 0; k < n; k++){
                if(a[i][k] != a[k][j])
                {
                    equal = false;
                    break;
                }
            }
            if(equal)
                c++;
        }
    }
    cout << c;
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
