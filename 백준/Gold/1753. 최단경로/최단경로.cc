#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;


void dijkstra(int start, vector<vector<pair<int, int>>> &graph, vector<int> &dist){
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

  pq.push({0,start});
  dist[start]=0;

  while (!pq.empty()){
    int currentDist = pq.top().first;
    int u = pq.top().second;
    pq.pop();

    if (currentDist > dist[u]) continue;
    for (auto &edge : graph[u]){
      int v = edge.first;
      int w = edge.second;
      if (dist[u] + w < dist[v]){
        dist[v] = dist[u]+ w;
        pq.push({dist[v],v});
      }
    }
  }
}
int main(void){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int V, E, k;
  cin >> V >> E;
  cin >> k;
  vector<vector<pair<int,int>>> graph(V+1);
  vector<int> dist(V+1, INF);
  for(int i=0;i<E;i++){
    int u, v, w;
    cin >> u >> v >> w;
    graph[u].push_back({v,w});
  }
  dijkstra(k,graph,dist);
  for(int i=1;i<=V;i++){
    if(dist[i]==INF){
      cout << "INF" << "\n";
    }
    else cout << dist[i] << "\n";
  }
}