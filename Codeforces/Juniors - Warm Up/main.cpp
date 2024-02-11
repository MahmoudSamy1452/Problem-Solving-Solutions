#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int k;
    cin >> k;
    vector<int> m(12);
    for(int i = 0; i < 12; i++){
        cin >> m[i];
    }
    sort(m.begin(), m.end(), greater<>());
    int acc = 0, cnt = 0;
    while(acc < k && cnt < 12){
        acc += m[cnt];
        cnt++;
    }
    if(acc < k)
        cout << -1;
    else cout << cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        baroudy14();
}