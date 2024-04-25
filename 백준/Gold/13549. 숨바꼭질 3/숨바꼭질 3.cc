#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int bfs(int N, int K){
  priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
  int visited[100001] = {0};
  visited[N]=1;
  pq.push({0,N});
  while(!pq.empty()){
    int time = pq.top().first;
    int loc = pq.top().second;
    visited[loc]=1;
    if(loc==K){
      return time;
    }
    pq.pop();
    if(loc-1>=0&&!visited[loc-1]) pq.push({time+1,loc-1});
    if(loc+1<100001&&!visited[loc+1]) pq.push({time+1,loc+1});
    if(loc*2<100001&&!visited[loc*2]) pq.push({time,loc*2});
  }
}
int main(void){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int N, K;
  cin >> N >> K;
  cout << bfs(N, K) << "\n";
}