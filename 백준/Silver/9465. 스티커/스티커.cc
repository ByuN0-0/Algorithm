#include <iostream>
#include <vector>
using namespace std;

int main(){
  int T;
  int n;
  cin >> T;
  int arr[2][100001];
  int dp[2][100001];
  for(int i = 1; i <= T; i++){
    cin >> n;
    for(int j = 0; j < 2; j++){
      for(int k = 1; k <= n; k++){
        cin >> arr[j][k];
      }
    }
    dp[0][0] = dp[1][0] = 0;
    dp[0][1] = arr[0][1];
    dp[1][1] = arr[1][1];
    for(int i=2; i<=n; i++){
      dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + arr[0][i];
      dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + arr[1][i];
    }
    cout << max(dp[0][n], dp[1][n]) << endl;
  }
  return 0;
}