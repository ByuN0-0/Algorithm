#include <iostream>

using namespace std;

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int n;
  int cnt=0;
  cin >> n;
  if (n%5==0) cout << n/5;
  else{
    while(n>0){
      n-=2;
      cnt++;
      if(n%5==0) {
        cnt+=n/5;
        break;
      }
    }
    if(n<0) cnt = -1;
    cout << cnt;
  }
}