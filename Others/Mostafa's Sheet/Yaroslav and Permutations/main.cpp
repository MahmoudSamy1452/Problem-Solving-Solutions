#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, x;
    cin >> n;
    int f[1000];
    memset(f,0, sizeof(f));
    for(int i = 0; i < n; i++){
        cin >> x;
        if(++f[x-1] > (n+1)/2)
        {
            cout << "NO";
            return;
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