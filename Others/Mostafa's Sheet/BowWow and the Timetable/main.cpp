#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    int c = -1, acc = 0; bool several = false;
    string s;
    cin >> s;
    std::reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++){
        if(c >= 0 && s[i] == '1')
            several = true;
        if(s[i] == '1')
            c = i;
    }
    //1000 8 -> 1,4
    //1001 9 -> 1,4
    if(c%2) {
        cout << (c+1)/2;
        return;
    }
    //101 5 -> 1,4
    if(several)
        cout << c/2 + 1;
    else
        //100 4 -> 1
        cout << c/2;
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