#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;
    bool prime = true;
    for(int i = 2; i <= n/2; i++){
        if(!(n%i))
            return false;
    }
    return true;
}

void baroudy14(){
    int n, m;
    cin >> n >> m;
    string s = "IEHOVA#";
    vector<string> grid(n);
    int a, b = n-1, step = 0;
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    for(int j = 0; j < m; j++){
        if(grid[n-1][j] == '@')
            a = j;
    }
    for(int i = 0; i < 7 ; i++){
        if(b-1 >= 0 && grid[b-1][a] == s[step]) {
            cout << "forth";
            b--;
        } else if (a-1 >= 0 && grid[b][a-1] == s[step]) {
            cout << "left";
            a--;
        } else {
            cout << "right";
            a++;
        }
        step++;
        if(i<6)
            cout << " ";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        baroudy14();
        cout << '\n';
    }
}