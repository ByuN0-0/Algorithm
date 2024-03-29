#include <iostream>
#include <vector>
using namespace std;

struct Node {
  char data;
  char left;
  char right;
  Node(): data('\0'), left('\0'), right('\0') {}
  Node(char data, char left, char right) : data(data), left(left), right(right) {}
};

const Node* findRoot(const vector<Node>& arr, char root) {
  for(const auto& node : arr) {
    //cout << "root: " << root << endl;
    //cout << "node.data: " << node.data << endl;
    if (node.data == root) {
      return &node;
    }
  }
  return nullptr;
}

void inorder(const vector<Node>& arr, const Node* root) {
  if (root->data == '.') return;
  const Node* left = findRoot(arr, root->left);
  if (left != nullptr) inorder(arr, left);
  cout << root->data;
  const Node* right = findRoot(arr, root->right);
  if (right != nullptr) inorder(arr, right);
}

void preorder(const vector<Node>& arr, const Node* root) {
  if (root->data == '.') return;
  cout << root->data;
  const Node* left = findRoot(arr, root->left);
  if (left != nullptr) preorder(arr, left);
  const Node* right = findRoot(arr, root->right);
  if (right != nullptr) preorder(arr, right);
}

void postorder(const vector<Node>& arr, const Node* root) {
  if (root->data == '.') return;
  const Node* left = findRoot(arr, root->left);
  if (left != nullptr) postorder(arr, left);
  const Node* right = findRoot(arr, root->right);
  if (right != nullptr) postorder(arr, right);
  cout << root->data;
}
int main() {
  int N;
  cin >> N;
  vector<Node> arr(N);
  for (int i=0;i<N;i++) {
    char data, left, right;
    cin >> data >> left >> right;
    arr[i] = Node(data, left, right);
  }
  preorder(arr, &arr[0]);
  cout << endl;
  inorder(arr, &arr[0]);
  cout << endl;
  postorder(arr, &arr[0]);
  return 0;
}