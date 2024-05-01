#include <iostream>

#define INF 987654321
using namespace std;


int graph[101][101];
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n, m;
  cin >> n >> m;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      graph[i][j]=INF;
      if(i==j) graph[i][j]=0;
    }
  }
  for(int i=0;i<m;i++){
    int a,b,c;
    cin >> a >> b >> c;
    if(graph[a][b]>c) graph[a][b]=c;
  }
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        graph[i][j] = min(graph[i][j], graph[i][k]+graph[k][j]);
      }
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(graph[i][j]==INF) cout << "0 ";
      else cout << graph[i][j] << " ";
    }
    cout << "\n";
  }
}