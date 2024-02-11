#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> x(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    int min = INT_MAX;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == 'R' && s[i+1] == 'L')
            if((x[i+1]-x[i])/2 < min)
                min = (x[i+1]-x[i])/2;
    }
    if(min == INT_MAX)
        cout << -1;
    else
        cout << min;
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