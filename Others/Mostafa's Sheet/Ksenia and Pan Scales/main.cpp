#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    string s,s1, s2, s3;
    int x, y, z;
    cin >> s;
    bool del = false;
    for(auto& x : s){
        if(x == '|'){
            del = true;
            continue;
        }
        if(del)
            s2+=x;
        else s1+=x;
    }
    cin >> s3;
    x = s1.length();
    y = s2.length();
    z = s3.length();
    for(int i = 0; i < z; i++)
    {
        if(x > y) {
            y++;
            s2 += s3[i];
        }
        else {
            x++;
            s1 += s3[i];
        }
    }
    if(x == y)
        cout << s1 << '|' << s2;
    else
        cout << "Impossible";
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