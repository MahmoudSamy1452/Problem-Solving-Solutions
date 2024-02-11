#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int N;
    cin >> N;
    vector<pair<string,pair<int,int>>> colors(N);
    for(int i = 0; i < N; i++){
        cin >> colors[i].first >> colors[i].second.first >> colors[i].second.second;
    }
    vector<pair<string,pair<int,int>>> Ada = colors;
    sort(Ada.begin(), Ada.end(),[](pair<string,pair<int,int>> &a, pair<string,pair<int,int>> &b){
        return (a.first == b.first) ? (a.second.second < b.second.second) : (a.first < b.first);
    });
    vector<pair<string,pair<int,int>>> Charles = colors;
    sort(Charles.begin(), Charles.end(),[](pair<string,pair<int,int>> &a, pair<string,pair<int,int>> &b){
        return (a.second.first == b.second.first) ? (a.second.second < b.second.second) : (a.second.first < b.second.first);
    });
    int c = 0;
    for(int i = 0; i < N; i++){
        if( Charles[i] == Ada[i] )
            c++;
    }
    cout << c << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        baroudy14();
    }
}