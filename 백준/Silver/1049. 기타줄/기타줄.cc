#include <iostream>
#include <string>

using namespace std;

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int N, M;
  int mp = 1001;
  int ms = 1001;
  int ans;
  cin >> N >> M;
  for(int i=0;i<M;i++){
    int p, s;
    cin >> p >> s;
    if (mp>p) mp = p;
    if (ms>s) ms = s;
  }

  if(mp<6*ms){
    ans = min((N/6+1)*mp, (N/6*mp) + (N%6*ms));
  }
  else {
    ans = ms*N;
  }
  cout << ans;
}