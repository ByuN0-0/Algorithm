#include <iostream>
#include <algorithm>

using namespace std;
int parent[500001];

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int N, M;
  int arr[2002];
  int dp[2002][2002];

  cin >> N;
  for(int i=1;i<=N;i++) cin >> arr[i];
  cin >> M;

  for(int i=1;i<=N;i++){
    dp[i][i]=1;
    if(i!=1&&arr[i-1]==arr[i]) dp[i-1][i]=1;
  }
  for(int i=2;i<=N-1;i++){
    for(int j=1;i+j<=N;j++){
      if(arr[j]==arr[i+j] && dp[j+1][j+i-1]==1){
        dp[j][j+i]=1;
      }
    }
  }


  for(int i=0;i<M;i++){
    int s, e;
    cin >> s >> e;
    if(dp[s][e]==1) cout << 1 << "\n";
    else cout << 0 << "\n";
  }
  return 0;

}