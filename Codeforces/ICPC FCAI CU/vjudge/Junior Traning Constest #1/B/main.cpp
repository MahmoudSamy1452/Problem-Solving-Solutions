#include <bits/stdc++.h>
using namespace std;


void baroudy14(){
    long long a, b, x, lower = 1, upper = 1e9;
    cin >> a >> b >> x;
    long long min = a * 1 + b * 1;
    if(x < min)
    {
        cout << 0;
        return;
    }
    while(upper >= lower){
        long long mid = (lower + upper)/2;
        long long price = a * mid + b* to_string(mid).length();
        if(price == x){
            cout << mid;
            return;
        }
        if(price > x){
            upper = mid - 1;
        } else {
            lower = mid +1;
        }
    }
    cout << upper;
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