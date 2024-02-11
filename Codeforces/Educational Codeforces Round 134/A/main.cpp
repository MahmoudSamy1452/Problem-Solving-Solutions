#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int f[26];
    vector<int> ind;
    memset(f, 0, sizeof(int)*26);
    string s;
    for(int i = 0 ;i < 2; i++) {
        cin >> s;
        for (int j = 0; j < 2; j++) {
            f[s[j] - 'a']++;
            if(f[s[j]-'a'] == 1)
                ind.push_back(s[j] - 'a');
        }
    }
    if(ind.size() == 1) {
        cout << 0 << '\n';
        return;
    }
    if(ind.size() == 2) {
        cout << 1 << '\n';
        return;
    }
    if(ind.size() == 3){
        cout << 2 << '\n';
        return;
    }
    cout << 3 << '\n';
    return;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        hayakel();
    }
}