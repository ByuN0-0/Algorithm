#include <iostream>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sum1, sum2;
  sum1 = a+d;
  sum2 = b+c;
  if (sum1>sum2) cout << sum1-sum2;
  else cout << sum2-sum1;
}