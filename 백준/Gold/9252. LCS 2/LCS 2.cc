#include <iostream>
#include <algorithm>
using namespace std;

int dp[1002][1002];
string a;
string b;

void dprint(int i,int j){
  if(dp[i][j]==0) return ;

  if(a[i-1]==b[j-1]){
    dprint(i-1,j-1);
    cout << a[i-1];
  }
  else{
    if(dp[i-1][j]>dp[i][j-1]){
      dprint(i-1,j);
    }
    else dprint(i,j-1);
  }
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //


  int lenA, lenB;
  cin >> a >> b;

  for(int i=0;i<a.size();++i){
    for(int j=0;j<b.size();++j){
      dp[i][j]=0;
    }
  }
  for(int i=0;a[i];++i){
    for(int j=0;b[j];++j){
      if(a[i]==b[j])dp[i+1][j+1]=dp[i][j]+1;
      else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
    }
  }
  cout<<dp[a.size()][b.size()]<<'\n';
  dprint(a.size(),b.size());
  return 0;
}