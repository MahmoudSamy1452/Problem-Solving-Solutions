#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, a, b, city;
    cin >> n;
    pair<int, int> range;
    vector<pair<int, int>> buses;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        buses.emplace_back(make_pair(a,b));
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        int c = 0;
        cin >> city;
        for(auto& j:buses)
            if(j.first <= city && j.second >= city)
                c++;
        cout << c << " ";
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        hayakel();
    }
}