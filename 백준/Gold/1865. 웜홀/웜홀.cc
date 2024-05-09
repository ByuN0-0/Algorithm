#include <iostream>
#include <vector>

using namespace std;

int n, m, w;

struct edge
{
  int s, e, t;
};


bool bell(vector<edge> edges){
  int s, e, t;
  vector<int>dist(n+1,0);
  for(int i=0;i<n-1;i++){
    for(int j=0;j<edges.size();j++){
      s = edges[j].s;
      e = edges[j].e;
      t = edges[j].t;
      if(dist[e] > dist[s] + t) dist[e] = dist[s] + t;
    }
  }
  for(int i=0;i<edges.size();i++){
    s = edges[i].s;
    e = edges[i].e;
    t = edges[i].t;
    if(dist[e] > dist[s] + t) return true;
  }
  return false;
}

int main(void){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int TC;
    cin >> TC;
    while(TC--){
      cin >> n >> m >> w;
      int s, e, t;
      vector<edge> edges;
      for(int i=0; i<m; i++){
        cin >> s >> e >> t;
        edges.push_back({s, e, t});
        edges.push_back({e, s, t});
      }
      for(int i=0; i<w; i++){
        cin >> s >> e >> t;
        edges.push_back({s, e, -t});
      }

      if(bell(edges)) cout << "YES\n";
      else cout << "NO\n";
    }
}