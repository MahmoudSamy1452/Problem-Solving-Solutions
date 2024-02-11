#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, m; char x; bool coloured = false;
    cin >> n >> m;
    for(int i = 0; i < n*m; i++){
        cin >> x;
        if(x == 'C' || x == 'M' || x == 'Y'){
            coloured = true;
        }
    }
    if(coloured)
        cout << "#Color" << '\n';
    else
        cout << "#Black&White" << '\n';
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