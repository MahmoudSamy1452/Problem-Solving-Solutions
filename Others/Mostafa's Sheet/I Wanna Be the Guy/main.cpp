#include <bits/stdc++.h>
using namespace std;

void Baroudy14() {
    int n, p, x;
    cin >> n;
    set<int> s;
    for (int i = 0; i < 2; i++) {
        cin >> p;
        for(int j = 0; j < p; j++)
        {
            cin >> x;
            s.insert(x);
        }
    }
    if(s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
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