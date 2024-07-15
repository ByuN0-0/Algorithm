#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<long> v;

void decrease(long now, long last){
  for(int i=last-1; i>= 0; i--){
    v.push_back(now*10+i);
    decrease(now*10+i, i);
  }
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n;
  cin >> n;
  for(int i=0; i<=9; i++){
    v.push_back(i);
    decrease(i,i);
  }
  sort(v.begin(),v.end());
  if(n>=v.size()) cout << -1 << "\n";
  else cout << v[n] << "\n";
  return 0;
}