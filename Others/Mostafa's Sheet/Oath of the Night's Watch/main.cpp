#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int n, x, c = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); ++it)
        if(*it != *v.begin() && *it != *(v.end()-1))
            c++;
    cout << c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        Baroudy14();
    }
}