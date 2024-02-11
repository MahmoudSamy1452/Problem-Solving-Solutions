#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    string w;
    cin >> w;
    int a[w.length()];
    for(int i = 0; i < w.length()-1; i++){
        if(w[i] != w[i+1])
            a[i]= 1;
        else a[i] = 0;
    }
    for(int i = 0; i < w.length()-1; i ++)
        cout << a[i] << " ";
    if(w[w.length()-1] == 'a')
        cout << 1;
    else cout << 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while(t--)
        hayakel();
}