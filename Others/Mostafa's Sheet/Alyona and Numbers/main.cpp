#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
     long long n, m;
    cin >> n >> m;
    vector<long long> rem1(5), rem2(5);
    for(int i = 1; i <= n; i++)
        rem1[i%5]++;
    for(int i = 1; i <= m; i++)
        rem2[i%5]++;
    cout << rem1[0]*rem2[0] + rem1[1]*rem2[4] + rem1[2]*rem2[3] + rem1[3]*rem2[2] + rem1[4]*rem2[1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        baroudy14();
}