#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, t, k, d, t1 = 0, t2, baked = 0;
    cin >> n >> t >> k >> d;

    t2 = d;
    while(baked < n){
        if(t1 < t2)
            t1 += t;
        else
            t2 += t;
        baked += k;
    }
    if(max(t1, t2) >= (n+k-1)/k * t)
        cout << "NO";
    else
        cout << "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}