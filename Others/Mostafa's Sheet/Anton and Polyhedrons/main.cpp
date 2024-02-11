#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    map<string,int> mp = {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
    int n, ans = 0; string s;
    cin >> n;
    for(int i = 0 ;i < n; i++){
        cin >> s;
        ans+=mp[s];
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