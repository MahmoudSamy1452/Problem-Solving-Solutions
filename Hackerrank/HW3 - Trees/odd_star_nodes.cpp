#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct node
{
  ll value;
  node *left;
  node *right;

  node(ll v)
  {
    value = v;
    left = nullptr;
    right = nullptr;
  }
};

ll countOddStars(node *root, multiset<ll> s)
{
  if (root == nullptr)
    return 0;

  s.insert(root->value);
  
  ll size = s.size(), count = 0;
  auto it = s.begin();
  
  for(int i = 0; i < size/2; i++)
  {
    it++;
  }

  if (size % 2 && *it == root->value)
    count++;
  count += countOddStars(root->left, s);
  count += countOddStars(root->right, s);

  return count;
}

void solve()
{
  ll n, x, e;
  cin >> n;
  vector<node *> nodes(n);

  for (ll i = 0; i < n; i++)
  {
    cin >> x;
    nodes[i] = new node(x);
  }

  cin >> e;
  char side;
  ll i, j;
  while (e--)
  {
    cin >> side >> i >> j;
    if (side == 'L')
      nodes[i]->left = nodes[j];
    else
      nodes[i]->right = nodes[j];
  }
  multiset<ll> s;
  cout << countOddStars(nodes[0], s) << '\n';
}

int main()
{
  ll t = 1;
  // cin >> t;
  for (int it = 1; it <= t; it++)
  {
    // cout << "Case #" << it << ": ";
    solve();
  }
  return 0;
}