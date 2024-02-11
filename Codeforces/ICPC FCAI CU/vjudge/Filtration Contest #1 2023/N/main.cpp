#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    long long n; string s;
    cin >> n;
    map<vector<int>, int> tempCount;
    int j;
    for(int i = 0; i < n; i++){
        map<char,int> mp;
        vector<int> v;
        j = 1;
        cin >> s;
        for(auto x : s){
            if(!mp[x]){
                mp[x] = j;
                v.push_back(j);
                j++;
            } else
                v.push_back(mp[x]);
        }
        tempCount[v]++;
    }
    long long ans = 0;
    for(auto x : tempCount){
        n = x.second;
        ans += n*(n-1)/2;
    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        hayakel();
    }
}