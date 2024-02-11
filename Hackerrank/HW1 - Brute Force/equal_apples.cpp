#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

bool divide_equally(const vector<int> &apples, int sumA, int sumB, int index)
{
  if(index == apples.size() && sumA == sumB)
    return 1;
  else if(index == apples.size())
    return 0;
  return divide_equally(apples, sumA + apples[index], sumB, index+1) || divide_equally(apples, sumA, sumB  + apples[index], index+1);
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  cout << divide_equally(v, 0, 0, 0);
}

int main()
{
  fast_cin();
  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}