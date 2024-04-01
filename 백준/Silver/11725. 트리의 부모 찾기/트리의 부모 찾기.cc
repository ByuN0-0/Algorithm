#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> v, int N){
  queue<int> q;
  int ans[100001]={0};
  int k;
  q.push(1);
  while(!q.empty()){
    k=q.front();
    q.pop();
    for(int i=0;i<v[k].size();i++){
      if (ans[v[k][i]]!=0) continue;
      ans[v[k][i]]=k;
      q.push(v[k][i]);
    }
  }
  for(int i=2;i<N+1;i++){
    cout << ans[i] <<"\n";
  }
}

int main(){
  std::cin.tie(NULL);
  std::ios_base::sync_with_stdio(false);
  int N;
  int a, b;
  cin >> N;
  vector<vector<int>> v(N+1);
  for(int i=0;i<N-1;i++){
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  bfs(v, N);
}
