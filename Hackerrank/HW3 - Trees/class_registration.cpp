#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct node
{
  ll id;
  node *students;
  node *left;
  node *right;

  node(ll v)
  {
    id = v;
    students = nullptr;
    left = nullptr;
    right = nullptr;
  }
};

void insert(node *&root, ll id)
{
  if (!root)
    root = new node(id);
  while (root && root->id != id)
  {
    if (root->id > id && root->left)
    {
      root = root->left;
    }
    else if (root->id > id)
    {
      root->left = new node(id);
    }

    if (root->id < id && root->right)
    {
      root = root->right;
    }
    else if (root->id < id)
    {
      root->right = new node(id);
    }
  }
}

ll search(node *&root, ll id)
{
  ll cnt = 1;
  while (root && root->id != id)
  {
    if (root->id > id)
    {
      root = root->left;
    }
    else if (root->id < id)
    {
      root = root->right;
    }
    cnt++;
  }
  return cnt;
}

void solve()
{
  ll n, q, c, s;
  cin >> n >> q;
  node *class_root = nullptr, *class_subroot = nullptr, *students_subroot = nullptr;
  for (int i = 0; i < n; i++)
  {
    cin >> c >> s;

    class_subroot = class_root;
    insert(class_subroot, c);
    if (!class_root)
      class_root = class_subroot;

    students_subroot = class_subroot->students;
    insert(students_subroot, s);
    if (!class_subroot->students)
      class_subroot->students = students_subroot;
  }

  for (int i = 0; i < q; i++)
  {
    cin >> c >> s;
    class_subroot = class_root;
    students_subroot = nullptr;
    ll cnt = search(class_subroot, c);
    if (class_subroot)
    {
      students_subroot = class_subroot->students;
      cnt += search(students_subroot, s);
    }
    cout << cnt - !(students_subroot != nullptr) << " " << (students_subroot != nullptr) << '\n';
  }
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

// ll search_class(class_node *&root, ll c)
// {
//   if (!root || root->id == c)
//   {
//     return (root != nullptr);
//   }
//   if (root->id < c)
//   {
//     return 1 + search_class(root->right, c);
//   }
//   else if (root->id > c)
//   {
//     return 1 + search_class(root->left, c);
//   }
//   return 0;
// }

// ll search(class_node *&root, ll c, ll s, bool &inserted)
// {
//   // search for class or create 1 if not found
//   while (root && root->id != c)
//   {
//     if (root->id < c)
//     {
//       if (root->right == nullptr)
//         root->right = new class_node(c);
//       root = root->right;
//     }
//     else
//     {
//       if (root->left == nullptr)
//         root->left = new class_node(c);
//       root = root->left;
//     }
//   }
// }