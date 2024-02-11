#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n, k, pos = 26; string s, ans;
    int f[26];
    memset(f, 0, sizeof(f));
    cin >> n >> k >> s;
    for(auto& x : s)
        f[x-'a']++;
    for(int i = 0; i < 26; i++){
        if(k >= f[i])
            k-=f[i];
        else {
            pos = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(pos == s[i]-'a' && k)
            --k;
        else if(s[i]-'a' >= pos && pos != 26)
            ans+=s[i];
    }
    cout << ans;
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