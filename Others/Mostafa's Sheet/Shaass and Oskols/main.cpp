#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, m, x, y;
    cin >> n;

    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;
    while(m--){
        cin >> x >> y;
        if(x > 1)
            a[x-1]+=y-1;
        if(x < n)
            a[x+1]+= a[x]-y;
        a[x] = 0;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}