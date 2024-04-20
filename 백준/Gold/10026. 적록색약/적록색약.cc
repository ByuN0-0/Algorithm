#include <iostream>
#include <queue>

using namespace std;

char graph[101][101];
bool isVisited[101][101] = { false };
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int N, cnt=0;

void dfs(int x, int y){
  isVisited[x][y]=true;
  for(int i=0;i<4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx<0||nx>=N||ny<0||ny>=N) continue;
    if(!isVisited[nx][ny]&&graph[x][y]==graph[nx][ny]){
      dfs(nx,ny);
    }
  }
}

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> graph[i];
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      isVisited[i][j]=false;
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(!isVisited[i][j]){
        dfs(i,j);
        cnt++;
      }
    }
  }
  cout << cnt << " ";
  cnt = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if (graph[i][j]=='G') graph[i][j]='R';
      isVisited[i][j]=false;
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(!isVisited[i][j]){
        dfs(i,j);
        cnt++;
      }
    }
  }
  cout << cnt << " ";
}