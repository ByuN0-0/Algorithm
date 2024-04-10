#include <iostream>
#include <string>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a;
  int b[10]={0};
  cin >> a;
  for(int i=0;i<a.size();i++){
    char k = a[i]-'0';
    b[(int)k]++;
  }

  int max=0;
  int temp;
  int ans;
  for(int i=0;i<10;i++){
    if (i!=9 && i!=6){
      if (max<b[i]){
        max=b[i];
      }
    }
  }
  ans = max;
  temp = (b[6]+b[9]+1)/2;
  if (max<temp){
    ans = temp;
  }
  cout << ans << "\n";
}