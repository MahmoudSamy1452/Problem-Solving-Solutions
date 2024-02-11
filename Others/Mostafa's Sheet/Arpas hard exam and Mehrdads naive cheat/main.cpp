#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << 1;
        return;
    }
    vector<int> v({8,4,2,6});
    cout << v[(n-1)%4];
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