#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

vector<int> x = {0,1};

void baroudy14(){
    int n;
    cin >> n;
    if (n == 1){
        cout << 0;
        return;
    }
    for(int i = 2; i < n; i++){
        x.push_back(x[i-1] + x[i-2]);
    }
    for(int e : x){
        cout << e << " ";
    }
}


int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}