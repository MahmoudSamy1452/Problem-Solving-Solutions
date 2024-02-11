#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, d, c = 0;
    cin >> n >> d;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end(), greater<>());
    while(!a.empty()){
        int i = d/a[0];
        a.erase(a.begin());
        while(!a.empty() && i){
            a.pop_back();
            i--;
        }
        if(!i)
            c++;
    }
    cout << c;
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