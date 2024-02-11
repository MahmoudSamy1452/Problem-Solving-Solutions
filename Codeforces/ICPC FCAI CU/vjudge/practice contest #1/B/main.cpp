#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    string x;
    cin >> x;
    for(auto n : x){
        if(n == '7')
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
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