#include <bits/stdc++.h>
#define pi 3.141592653589793238
#define fio ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;

vector<int> x;

void generate(int n){
    if(n > 1e5)
        return;
    x.push_back(n*10+4);
    x.push_back(n*10+7);
    generate(n*10+4);
    generate(n*10+7);
}


void baroudy14(){
    generate(0);
    std::sort(x.begin(), x.end());
    int a, b; bool found = false;
    cin >> a >> b;
    for(auto e : x)
        if(e >= a and e <= b){
            found = true;
            cout << e << " ";
        } else if (e > b)
            break;

    if(!found)
        cout << -1;
}

int main() {
    fio;

    long long t = 1;
    //cin >> t;

    while(t--) {
        baroudy14();
    }
}