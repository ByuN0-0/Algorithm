#include <iostream>

using namespace std;

int graph[505][505]={0};
int visited[505][505]={0};
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int maxi = -1;
int N,M;
void dfs(int x, int y, int depth, int value){
  if(depth==4) maxi = value>maxi ? value : maxi;
  else{
    for(int i=0;i<4;i++){
      int nx = x + dx[i];
      int ny = y + dy[i];
      if(nx<1||nx>N||ny<1||ny>M) continue;
      if(!visited[nx][ny]){
        visited[nx][ny]++;
        dfs(nx, ny, depth+1, value + graph[nx][ny]);
        visited[nx][ny]--;
      }
    }
  }
}

int main(void){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////

  cin >> N >> M;
  for(int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
      cin >> graph[i][j];
    }
  }
  for(int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
      visited[i][j]++;
      dfs(i,j,1,graph[i][j]);
      visited[i][j]--;
    }
  }
  for(int i=1;i<N;i++){
    for(int j=1;j<M;j++){
      int mini=100000;
      int mid = graph[i][j];
      for(int k=0;k<4;k++){
        mini = mini<graph[i+dx[k]][j+dy[k]] ? mini : graph[i+dx[k]][j+dy[k]];
        mid += graph[i+dx[k]][j+dy[k]];
      }
      maxi = maxi < mid-mini ? mid-mini : maxi;
    }
  }
  cout << maxi;
  return 0;
}