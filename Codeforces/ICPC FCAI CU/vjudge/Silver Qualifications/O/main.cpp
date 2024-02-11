#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int f[3000] = {0};
int k = 0, m = 0;

void baroudy14(){
    cin >> k >> m;
    for(int i = 0; i < m; i++){
        int weight = 0, value = 0;
        cin >> weight >> value;
        for(int j = k; j >= weight; j--){
            if(f[j-weight]+value > f[j])
                f[j] = f[j-weight] + value;
        }
    }
    cout << "Hey stupid robber, you can get " << f[k] << ".\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
        baroudy14();
}
