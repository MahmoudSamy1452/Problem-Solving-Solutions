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
typedef long double ld;

#define fast_cin()                  \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

struct node
{
  int val;
  node *left, *right;
  node(int v)
  {
    val = v;
    left = nullptr;
    right = nullptr;
  }
};

queue<node *> q;

void bfs(node *root)
{
  q.push(root);
  while (!q.empty())
  {
    cout << q.front()->val << " ";
    if (q.front()->left)
      q.push(q.front()->left);
    if (q.front()->right)
      q.push(q.front()->right);
    q.pop();
  }
}

node *create_tree(vector<int> &nodes, int min, int max, int &index)
{
  if (index < 0)
    return nullptr;
  if (nodes[index] <= min || nodes[index] >= max)
    return nullptr;
  node *root = new node(nodes[index]);
  index--;
  root->right = create_tree(nodes, root->val, max, index);
  root->left = create_tree(nodes, min, root->val, index);
  return root;
}

void solve()
{
  int n;
  cin >> n;
  vector<int> nodes(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nodes[i];
  }
  int index = nodes.size() - 1;
  node *root = create_tree(nodes, INT_MIN, INT_MAX, index);
  bfs(root);
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