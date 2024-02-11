#include <bits/stdc++.h>
using namespace std;

void baroudy14(){
    long int n, k, x;
    cin >> n >> k;
    bool cycle = true, noChange =  false;
    vector<pair<long int, int>> a, b;
    int s1 = -1;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(s1 == -1 || (s1 >= 0 && a[s1].first != x)){
           a.push_back(make_pair(x, 1));
           s1++;
        }
        else
            (a[s1].second)+=1;
    }
    if(a[s1].first == a[0].first){
        a[0].second+=a[s1].second;
        a.pop_back();
        s1--;
    }

    int s2 = -1;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(s2 == -1 || (s2 >= 0 && b[s2].first != x)){
            b.push_back(make_pair(x, 1));
            s2++;
        }
        else
            (b[s2].second)+=1;
    }
    if(b[s2].first == b[0].first){
        b[0].second+=b[s2].second;
        b.pop_back();
        s2--;
    }

    auto pos = find(a.begin(), a.end(), *b.begin());
    if(pos == a.begin())
        noChange = true;
    long int c = 1;
    if(s1 != s2)
        cycle = false;

    if(n == 2 && s1 == 1 && noChange == k%2)
        cycle = false;

    while(cycle && c <= s2) {
        if (pos == a.end()-1)
            pos = a.begin();
        else
            pos++;
        if (pos->first != b[c].first || pos->second != b[c].second)
        {
            cycle = false;
        }
        c++;
    }
    if(cycle && ((k && !noChange) || ((k != 1 || s1 == 0) && noChange)))
        cout << "YES";
    else cout << "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++){
        cout << "Case #" << i + 1 << ": ";
        baroudy14();
        cout << '\n';
    }
}