#include <bits/stdc++.h>
#include <cmath>
using namespace std;

vector<long long> x1, x2;
long long sum1 = 0, sum2 = 0, diff = LLONG_MAX;

void rec(vector<long long> x, int i){
    if(i >= x.size()){
        diff = min(diff, abs(sum1 - sum2));
        return;
    }
    sum1 += x[i];
    rec(x, i+1);
    sum1 -= x[i];
    sum2 += x[i];
    rec(x, i+1);
    sum2 -= x[i];
}

void baroudy14(){
    int n;
    cin >> n;
    vector<long long> x(n);
    for(int i = 0; i < n; i++)
        cin >> x[i];
    rec(x,0);
    cout << diff;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
        baroudy14();
}
