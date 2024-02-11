#include <bits/stdc++.h>

using namespace std;
void hayakel() {
    int n, k, x;
    int freq[500000];
    memset(freq, 0, sizeof(freq));
    cin >> n >> k;
    vector<int> v;
    int j = 500000;
    for(int i = 0; i < n; i++){
        cin >> x;
        freq[x]++;
        if(i < k)
        {
            j = min(x,j);
        } else if(x > j) {
            j++;
            while(!freq[j])
                j++;
        }
        if(i >= k-1)
            cout << j << '\n';
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