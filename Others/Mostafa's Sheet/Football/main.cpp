#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n;
    map<string, int> mp;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        mp[s]++;
    }
    cout << max_element(mp.begin(), mp.end(),[](auto a, auto b){return a.second < b.second;})->first;
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