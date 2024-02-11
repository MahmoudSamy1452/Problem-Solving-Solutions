#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, c = 0;
    cin >> n;
    vector<string> v;
    string name;
    cin.ignore();
    for(int i = 0; i < n;i++){
        getline(cin,name);
        v.push_back(name);
    }

    for(int i = 1; i < n;i++){
        if(v[i] < v[i-1]){
            c++;
            string hold = v[i];
            for(int j = i-1; j >= 0; j--){
                if(hold > v[j])
                    v[j+1] = hold;
                else
                    v[j+1] = v[j];
            }
        }
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
        hayakel();
    }
}