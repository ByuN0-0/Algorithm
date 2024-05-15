#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[100001];
int find(int x){
  if (parent[x]==x) return x;
  else return parent[x] = find(parent[x]);
}
void unionSets(int x,int y){
  x = find(x);
  y = find(y);
  parent[y] = x;
}
bool sameparent(int x, int y){
  int a = find(x);
  int b = find(y);
  return (a==b);
}
int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int V, E;
  cin >> V >> E;
  vector<pair<int, pair<int,int>>> edges;
  for(int i=0;i<E;i++){
    int a, b, w;
    cin >> a >> b >> w;
    edges.push_back({w,{a,b}});
  }
  sort(edges.begin(), edges.end());
  vector<int> weight;
  for(int i = 1; i <= V; i++) parent[i] = i;
  for(int i=0;i<E;i++){
    if(!sameparent(edges[i].second.first, edges[i].second.second)){
      unionSets(edges[i].second.first, edges[i].second.second);
      weight.push_back(edges[i].first);
    }
  }
  int answer = 0;
  for(int i=0; i<weight.size()-1; i++){
    answer += weight[i];
  }
  cout << answer << "\n";
}