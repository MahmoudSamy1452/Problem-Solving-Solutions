#include <bits/stdc++.h>
using namespace std;

void hayakel(){
   int n, x, t;
   vector<int> s;
   cin >> n;
   x = n;
   for(int i = 0; i< n;i++){
       cin >> t;
       if(t == x) {
           cout << t << " ";
           x--;
       } else {
           auto it = upper_bound(s.begin(), s.end(), t);
           s.insert(it, t);
       }
       while(!s.empty() && *(s.end()-1) == x)
       {
           cout << x << " ";
           x--;
           s.pop_back();
       }
       cout << '\n';
   }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("output.txt", "w", stdout);
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++){
        hayakel();
    }
}