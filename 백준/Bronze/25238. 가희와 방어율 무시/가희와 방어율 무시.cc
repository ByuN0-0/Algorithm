#include <iostream>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  double a, b;
  cin >> a >> b;
  (a - (a*b/100)) < 100 ? cout << 1 : cout << 0;
}