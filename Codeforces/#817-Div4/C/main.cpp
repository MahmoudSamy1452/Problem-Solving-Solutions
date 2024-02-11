#include <bits/stdc++.h>
using namespace std;

void Baroudy14(){
    map<string, vector<int>> mp;
    int a[3] = {0,0,0};
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < n; j++)
        {
            cin >> s;
            mp[s].push_back(i);
        }
    for(auto& item : mp){
        if(item.second.size() == 3)
            continue;
        else if (item.second.size() == 2)
        {
            for(auto& x : item.second)
                a[x]++;
        }
        else
            a[item.second[0]]+=3;
    }

    for(int i = 0 ; i < 3; i++){
        cout << a[i] << " ";
    }
    cout << '\n';
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