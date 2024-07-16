#include <iostream>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int r1, r2, s;
  cin >> r1 >> s;
  r2 = 2*s-r1;
  cout << r2;

}