#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

struct node
{
  int val;
  int sum_subtree;
  node *left;
  node *right;
  node(int v)
  {
    val = v;
    sum_subtree = v;
    left = nullptr;
    right = nullptr;
  }
};

bool max_bigParent(node *n, int &mx)
{
  if (!n)
    return true;

  int l = 0, r = 0, l_sum = 0, r_sum = 0;

  bool left_bigParent = max_bigParent(n->left, mx);
  bool right_bigParent = max_bigParent(n->right, mx);

  if (n->left)
  {
    l = n->left->val;
    l_sum = n->left->sum_subtree;
  }
  if (n->right)
  {
    r = n->right->val;
    r_sum = n->right->sum_subtree;
  }

  n->sum_subtree = l_sum + r_sum + n->val;
  if (left_bigParent && right_bigParent && n->val > r && n->val > l)
  {

    mx = max(mx, n->sum_subtree);
    return true;
  }
  return false;
}

void solve()
{
  int N, E, v;
  cin >> N >> E;
  vector<node *> nodes(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> v;
    nodes[i] = new node(v);
  }
  char side;
  int p, c;
  for (int i = 0; i < E; i++)
  {
    cin >> side >> p >> c;
    if (side == 'L')
      nodes[p]->left = nodes[c];
    else
      nodes[p]->right = nodes[c];
  }
  int ans = 0;
  max_bigParent(nodes[1], ans);
  cout << ans;
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