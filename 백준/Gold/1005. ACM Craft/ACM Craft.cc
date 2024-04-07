#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T;
  cin >> T;
  for(int i=0;i<T;i++){
    int N, K, a, b, W, cur, next;
    vector<int> node[1001];
    vector<int> BT(1001,0);
    vector<int> degree(1001,0);
    vector<int> dp(1001,0);
    queue<int> q;
    cin >> N >> K;
    for(int j=1;j<=N;j++){
      cin >> BT[j];
      dp[j]=BT[j];
    }
    for(int j=0;j<K;j++){
      cin >> a >> b;
      node[a].push_back(b);
      degree[b]++;
    }
    cin >> W;
    for(int j=1;j<=N;j++){
      if (!degree[j]){
        q.push(j);
      }
    }
    while(!q.empty()){
      cur = q.front();
      q.pop();
      for (int j=0;j<node[cur].size();j++){
        next = node[cur][j];
        if (dp[next]<dp[cur]+BT[next]){
          dp[next]=dp[cur]+BT[next];
        }
        degree[next]--;
        if (!degree[next]) q.push(next);
      }
    }
    cout << dp[W] <<"\n";
  }
}