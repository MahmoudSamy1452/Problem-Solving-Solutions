#include <bits/stdc++.h>
using namespace std;

void Baroudy14() {
    int n, max = 4126, r1, r2; bool unrated = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> r1 >> r2;
        if(r1 != r2)
        {
            cout << "rated";
            return;
        }
        if(r1 > max){
            unrated = true;
        }
        max = r1;
    }
    if(!unrated)
        cout << "maybe";
    else
        cout << "unrated";
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