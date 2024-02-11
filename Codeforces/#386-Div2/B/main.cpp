#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n;
    cin >> n;
    string w, ans;
    cin >> w;
    reverse(w.begin(), w.end());
    for(auto& x: w)
        ans.insert(ans.length()/2,1,x);

    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}