#include <bits/stdc++.h>
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

void baroudy14(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, m = 0;
    for(auto x : s){
        if(x == 'A')
            a++;
        else
            m++;
    }
    if(a > m){
        cout << "Ahmed";
    } else if (a == m){
        cout << "Friendship";
    } else
        cout << "Mostafa";
}

int main() {
    fio;

    int t = 1;
    //cin >> t;

    while(t--)
        baroudy14();
}
