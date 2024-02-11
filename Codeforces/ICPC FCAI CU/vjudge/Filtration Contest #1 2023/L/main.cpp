#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    int n; bool sorted = false;
    cin >> n;
    vector<long long> v;
    int op; long long x;
    while(n--){
        cin >> op;
        if(op == 1){
            cin >> x;
            v.push_back(x);
            sorted = false;
        } else if (op == 2){
            cout << *v.begin() << '\n';
            v.erase(v.begin());
            sorted = false;
        } else if(!sorted) {
            sort(v.begin(), v.end());
            sorted = true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;

    while (t--) {
        hayakel();
    }
}