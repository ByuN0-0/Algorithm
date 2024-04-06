#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define INF 99999999

int arr[101]={0}; //템 개수
int len[101][101]={-1}; //거리
int dist[101];
bool visited[101];
int n, m, r;
int ans[101]={0};

vector<int> dijkstra(int start, int V, vector<pair<int,int>> adj[]){
  vector<int> dist(V+1, INF);
  priority_queue<pair<int,int>> pq;

  dist[start]=0;
  pq.push({0,start});
  while(!pq.empty()){
    int cost = -pq.top().first;
    int cur = pq.top().second;
    pq.pop();
    for (int i=0;i<adj[cur].size();i++){
      int next = adj[cur][i].first;
      int nCost = cost + adj[cur][i].second;
      if(dist[next]>nCost){
        dist[next]=nCost;
        pq.push({-nCost,next});
      }
    }
  }
  return dist;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m >> r;
  for(int i=1;i<=n;i++){
    cin >> arr[i];
  }
  vector<pair<int,int>> adj[n+1];
  for(int i=0;i<r;i++){
    int a, b, l;
    cin >> a >> b >> l;
    adj[a].push_back({b,l});
    adj[b].push_back({a,l});
  }
  for(int i=1;i<=n;i++){
    vector<int> dist = dijkstra(i,n,adj);
    int sum=0;
    for(int j=1;j<=n;j++){
      //cout << "i값: "<< i << ", j값: " << j << ", dist[j]값:" << dist[j] << '\n'; //dist값 출력
      if(dist[j]<=m){
        sum+=arr[j];
      //  cout <<"sum값"<< sum << '\n';
      }
    }
    ans[i]=sum;
  }
  cout << *max_element(ans, ans+n+1) << '\n';
  return 0;
}