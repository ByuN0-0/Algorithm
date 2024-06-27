#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a, b;
  int c;
  cin >> a >> b;
  cin >> c;
  int sum = a + b;
  if(sum<2*c) cout << sum;
  else{
    cout << sum-c-c;
  }
}