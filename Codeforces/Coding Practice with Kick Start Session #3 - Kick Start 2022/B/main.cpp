#include <bits/stdc++.h>
using namespace std;

void hayakel(){
    int n, c = 0;
    cin >> n;
    int a[n];
    int max = -1;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if((a[i] > max) && (a[i] > ((i < n-1) ? a[i+1] : -1)))
            c++;
        if(a[i] > max)
            max = a[i];
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