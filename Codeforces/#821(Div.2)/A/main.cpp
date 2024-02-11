#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> x(n);
    for(long long i = 0; i < n; i++){
        cin >> x[i].first;
        x[i].second = i;
    }
    sort(x.begin(), x.end(), [&k](pair<long long, long long> &a, pair<long long, long long> &b){
        if(a.second%k == b.second%k)
            return a.first > b.first;
        else
            return false;
    });
    long long acc = 0;
    for(int i = 0; i < k; i++){
        acc += x[i].first;
    }
    cout << acc << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++){
        //cout << "Case #" << i << ": ";
        baroudy14();
    }
}