#include <bits/stdc++.h>
using namespace std;

vector<int> subset;
int n = 5;

void solve_recursive(int k){
    if(k == n){
        for(int x : subset){
            cout << x << " ";
        }
        cout << "\n";
    } else
    {
        subset.push_back(k);
        solve_recursive(k+1);
        subset.pop_back(); // multiple calls on the same number so remove it now
        solve_recursive(k+1);
    }
}

void solve_iterative(){
    for (int b = 0; b < (1 << n); b++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if(b&(1 << i)) subset.push_back(i);
        }
        for(int x : subset){
            cout << x << ' ';
        }
        cout << '\n';
    }
}

vector<bool> chosen(n, false);
void permutations(){
    if(subset.size() == n){
        for(int x : subset){
            cout << x << ' ';
        }
        cout << '\n';
    } else {
        for(int i = 0; i < n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            subset.push_back(i);
            permutations();
            chosen[i] = false;
            subset.pop_back();
        }
    }
}

int main(){
    //freopen("abc", "r", stdin);
    //freopen("xyz", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    permutations();
}