#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];
int dp[100001];
int visited[100001];
int n, r, q;

void dfs(int node, int parent){
  visited[node] = true;
  for(int i = 0; i < v[node].size(); i++){
    int next = v[node][i];
    if(visited[next]) continue;
    dfs(next, node);
  }
  if(parent != -1){
    dp[parent] += dp[node];
  }
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  fill_n(dp, 100001, 1);
  cin >> n >> r >> q;
  for(int i = 0; i < n-1; i++){
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  dfs(r, -1);
  for(int i = 0; i < q; i++){
    int a;
    cin >> a;
    cout << dp[a] << '\n';
  }
}