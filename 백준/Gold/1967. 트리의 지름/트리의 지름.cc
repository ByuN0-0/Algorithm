#include <iostream>
#include <vector>
#include <queue>
#define INF 987654321
using namespace std;

int n;
vector<vector<pair<int,int>>> graph(10001);
int d[10001];
void dijkstra(int start){
    priority_queue<pair<int,int>>pq; // 거리, 노드 인덱스

    pq.push({0,start}); //시작 노드로 가기위한 최단 경로는 0으로 설정하여, 큐에 삽입.
    d[start]=0;

    while(!pq.empty())
    {
        int dist = -pq.top().first; //현재 노드까지의 비용
        int now = pq.top().second; // 현재 노드
        pq.pop();

        if(d[now]<dist) // 이미 최단경로를 체크한 노드인 경우 패스
            continue;

        for(int i=0; i<graph[now].size(); i++)
        {
            int cost = dist+graph[now][i].second; // 거쳐서 가는 노드의 비용을 계산
                                                  // 현재노드까지 비용 + 다음 노드 비용
            if(cost<d[graph[now][i].first]) // 비용이 더 작다면 최단경로 테이블 값을 갱신.
            {
                d[graph[now][i].first]=cost;
                pq.push(make_pair(-cost,graph[now][i].first));
            }
        }
    }
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  cin >> n;
  if(n==1){
    cout << 0 << "\n";
    return 0;
  }
  for(int i=1;i<n;i++){
    int p, c, w;
    cin >> p >> c >> w;

    graph[p].push_back({c,w});
    graph[c].push_back({p,w});
  }
  fill(d, d + 10001, INF);
  dijkstra(1);
  int max=0;
  int temp=0;
  for(int i=1;i<=n;i++){
    if(max<d[i]){
      max = d[i];
      temp = i;
    }
  }
  fill(d, d + 10001, INF);
  dijkstra(temp);
  max=0;
  for(int i=1;i<=n;i++){
    if(max<d[i]){
      max = d[i];
    }
  }
  cout << max << "\n";
}