#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

struct node
{
  int val, count_subtree;
  node *left, *right;
  node(int v)
  {
    val = v;
    count_subtree = 0;
    left = nullptr;
    right = nullptr;
  }
};

int count(node *root)
{
  if (root == nullptr)
    return 0;
  int c = count(root->left);
  c += count(root->right);
  root->count_subtree = c + 1;
  return c + 1;
}

void solve()
{
  int n, a, b, q;
  cin >> n;
  vector<node *> nodes(n + 1);
  for (int i = 1; i <= n; i++)
  {
    nodes[i] = new node(i);
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> a >> b;
    if (a != -1)
      nodes[i]->left = nodes[a];
    if (b != -1)
      nodes[i]->right = nodes[b];
  }
  count(nodes[1]);
  cin >> q;
  int x, y;
  for (int i = 0; i < q; i++)
  {
    cin >> x >> y;
    if (x == 1)
      cout << nodes[y]->count_subtree << "\n";
    else
    {
      int ans = 0;
      for (int i = 1; i <= n; i++)
      {
        if (y == nodes[i]->count_subtree)
          ans++;
      }
      cout << ans << '\n';
    }
  }
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