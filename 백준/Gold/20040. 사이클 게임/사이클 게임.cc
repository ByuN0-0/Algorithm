#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int parent[500001];

int find(int u){
  if (parent[u]==u) return u;
  return parent[u] = find(parent[u]);
}
bool union_set(int u, int v){
  int x = find(u);
  int y = find(v);
  if(x==y) return true;
  parent[x]=y;
  return false;
}
int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int n, m;
  int ans = 0;
  cin >> n >> m;
  for(int i=0;i<n;i++){
    parent[i]=i;
  }
  for(int i=1;i<=m;i++){
    int u, v;
    cin >> u >> v;
    if(union_set(u, v)){
      ans = i;
      break;
    }
  }
  if(ans == 0) cout << 0 << "\n";
  else cout << ans << "\n";
}