#include <iostream>

using namespace std;

int main(){
  int dp[12];
  for(int i=4;i<12;i++){
    dp[i]=-1;
  }
  dp[0]=0;
  dp[1]=1;
  dp[2]=2;
  dp[3]=4;
  int t;
  int n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    if (dp[n]!=-1){
      cout<<dp[n]<<'\n';
    }
    else{
      for(int i=4;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
      }
      cout<<dp[n]<<'\n';
    }
  }
}