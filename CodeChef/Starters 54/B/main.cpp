#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    int N;
    cin >> N;
    vector<vector<int>> v;

    for(int i = 0; i < N; i++)
    {
        int k,x;
        cin >> k;
        vector<int> l;
        v.push_back(l);
        for(int j = 0; j < k; j ++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }

    for(int i = 0; i < N; i++) {
        set<int,greater<>> temp;
        for (int j = i + 1; j < N; j++) {
            for (auto &z: v[i]) {
                temp.insert(z);
            }
            for (auto &z: v[j]) {
                temp.insert(z);
            }
            if(temp.size() == 5){
                cout << "YES" << '\n';
                return;
            }
            temp.clear();
        }
    }
    cout << "NO" << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        Baroudy14();
    }
}