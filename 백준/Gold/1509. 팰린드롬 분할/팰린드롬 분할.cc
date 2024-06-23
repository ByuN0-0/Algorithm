#include <iostream>
#include <algorithm>

#define INF 1e9+7

using namespace std;

bool dp[2501][2501];
string str;
int N, res[2501];

bool is_palindrome(int st, int ed){
  if(ed>N) return false;
  if(str[st]==str[ed]){
    if(dp[st+1][ed-1]||ed-st==1) return true;
  }
  return false;
}

void fill_dp(){
  for(int d=0;d<N;d++){
    for(int i=1;i+d<=N;i++){
      if(d==0){
        dp[i][i]=true;
        continue;
      }
      if(is_palindrome(i,i+d)) dp[i][i+d]=true;
    }
  }
}

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  cin >> str;
  N = str.size();
  str = " "+str;
  fill_dp();
  res[0]=0;
  for(int i=1;i<=N;i++){
    res[i]=INF;
    for(int j=1;j<=i;j++){
      if(dp[j][i]){
        if(res[i]>res[j-1]+1) res[i]=res[j-1]+1;
      }
    }
  }
  cout << res[N];
}