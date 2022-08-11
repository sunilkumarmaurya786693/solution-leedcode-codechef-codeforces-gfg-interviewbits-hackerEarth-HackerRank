#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 3e5 + 6;

struct Node {
  Node* child[2];
  Node() {
    this -> child[0] = this -> child[1] = NULL;
  }
};
void insert(Node* root, int x) {
  Node* cur = root;
  for(int bit = 21; bit >= 0; bit--) {
    int p = (x & (1 << bit)) ? 1 : 0;
    if(!cur -> child[p]) {
      cur -> child[p] = new Node();
    }
    cur = cur -> child[p];
  }
}
int xor_max_query(Node* root, int x) {
  int ans = 0;
  Node* cur = root;
  for(int bit = 21; bit >= 0; bit--) {
    int p = (x & (1 << bit)) ? 1 : 0;
    if(cur -> child[1^p]) {
      ans += (1 << bit);
      cur = cur -> child[1^p];
    } else if(cur -> child[p]) {
      cur = cur -> child[p];
    } else {
      break;
    }
  }
  return ans;
}

// vector<Node*> tree;
Node* tree[4 * MAX_N];
void merge(Node* &root, Node* root1, Node* root2) {
  if(!root1 && !root2)
    return;
  root = new Node();
  if(!root1) {
    root = root2;
    return;
  }
  if(!root2) {
    root = root1;
    return;
  }
  merge(root -> child[0], root1 -> child[0], root2 -> child[0]);
  merge(root -> child[1], root1 -> child[1], root2 -> child[1]);
}
void build(int id, int l, int r, vector<int>& a) {
  if(l == r) {
    tree[id] = new Node();
    insert(tree[id], a[l]);
    return;
  }
  int mid = (l + r) / 2;
  build(2 * id, l, mid, a);
  build(2 * id + 1, mid + 1, r, a);
  merge(tree[id], tree[2 * id], tree[2 * id + 1]);
}
int query(int id, int l, int r, int lq, int rq, int x) {
  if(lq > r || l > rq)
    return 0;
  if(lq <= l && r <= rq)
    return xor_max_query(tree[id], x);
  int mid = (l + r) / 2;
  int on_left = query(2 * id, l, mid, lq, rq, x);
  int on_right = query(2 * id + 1, mid + 1, r, lq, rq, x);
  return max(on_left, on_right);
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0); 
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) 
    cin >> a[i];
  build(1, 0, n - 1, a);
  int Q;
  cin >> Q;
  for(int q = 0; q < Q; q++) {
    int l, r, x;
    cin >> l >> r >> x;
    l -= 1;
    r -= 1;
    cout << query(1, 0, n - 1, l, r, x) << '\n';
  }
  return 0;
} 
