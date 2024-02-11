#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){

        if((!i && s[i] != '9' && s[i] >= '5') or (i && s[i] >= '5' ))
            cout << '9'-s[i];
        else
            cout << s[i];
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