#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};
int N, M;

int visited[1001][1001][2];
string graph[1001];


int bfs(){
  queue<pair<int, pair<int, int>>> q;
  visited[1][1][0]=1;
  q.push({0,{1,1}});
  while(!q.empty()){
    int isbreak = q.front().first;
    int x = q.front().second.first;
    int y = q.front().second.second;
    if(x==N && y==M) return visited[x][y][isbreak];
    q.pop();
    for(int i=0;i<4;i++){
      int nx = x+dx[i];
      int ny = y+dy[i];
      if(nx<1 || nx>N || ny<1 || ny>M) continue;
      if(visited[nx][ny][isbreak]>0) continue;
      if(graph[nx][ny]=='0'){
        q.push({isbreak,{nx,ny}});
        visited[nx][ny][isbreak]=visited[x][y][isbreak]+1;
      }
      if(graph[nx][ny]=='1' && isbreak==0){
        q.push({1,{nx,ny}});
        visited[nx][ny][1]=visited[x][y][0]+1;
      }
    }
  }
  return -1;
}

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //

  cin >> N >> M;
  graph[0]="";
  for(int i=0;i<=N;i++){
    for(int j=0;j<=M;j++){
      for(int k=0;k<2;k++){
        visited[i][j][k]=0;
      }
    }
  }
  for(int i=1;i<=N;i++){
    string str;
    cin >> str;
    str = " "+str;
    graph[i]=str;
  }
  cout << bfs();
}