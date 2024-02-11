#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    queue<int> a, b, c;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        a.push(x);
    }

    for(int i = 0; i < n; i++) {
        cin >> x;
        b.push(x);
    }

    while(!a.empty() || !b.empty()) {
        if(a.empty()){
            c.push(b.front());
            b.pop();
            continue;
        }
        if(b.empty()){
            c.push(a.front());
            a.pop();
            continue;
        }
        if(a.front() < b.front()){
            c.push(a.front());
            a.pop();
        } else {
            c.push(b.front());
            b.pop();
        }
    }
    while(!c.empty()){
        cout << c.front() << " ";
        c.pop();
    }
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