#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, t;
    cin >> n >> t;
    if(t == 10 && n == 1)
    {
        cout << -1;
        return;
    }
    cout << t;
    if(t == 10)
        n--;
    for(int i = 0; i < n-1;i++)
        cout << 0;

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