#include <iostream>
#include <queue>

using namespace std;
int dir[6][3]= {{1,0,0},{0,1,0},{-1,0,0},{0,-1,0},{0,0,1},{0,0,-1}};
int arr[101][101][101];
int M,N,H;
queue<pair<pair<int,int>,int>> q;

void bfs(){
  int cnt = -1;
  while (!q.empty()){
    int size=q.size();
    cnt++;
    for(int i=0;i<size;i++){
      int n = q.front().first.first;
      int m = q.front().first.second;
      int h = q.front().second;
      q.pop();
      for(int j=0;j<6;j++){
        int dn = n+dir[j][0];
        int dm = m+dir[j][1];
        int dh = h+dir[j][2];
        if(dn>=0 && dn<N && dm>=0 && dm<M && dh>=0 && dh<H && arr[dh][dn][dm]==0){
          q.push({{dn,dm},dh});
          arr[dh][dn][dm]=1;
        }
      }
    }
  }
  for(int i=0;i<H;i++){
    for(int j=0;j<N;j++){
      for(int k=0;k<M;k++){
        if(arr[i][j][k]==0){
          cout << -1 << "\n";
          return;
        }
      }
    }
  }
  cout << cnt << "\n";
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  ////////////////////////////
  cin >> M >> N >> H;
  for(int i=0;i<H;i++){
    for(int j=0;j<N;j++){
      for(int k=0;k<M;k++){
        cin >> arr[i][j][k];
        if (arr[i][j][k]==1){
          q.push({{j,k},i});
        }
      }
    }
  }
  bfs();
}