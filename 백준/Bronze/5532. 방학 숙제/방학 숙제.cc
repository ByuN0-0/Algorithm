#include <iostream>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int l, a, b, c, d;
  cin >> l >> a >> b >> c >> d;
  int k, m;
  k = a%c==0 ? a/c : a/c+1;
  m = b%d==0 ? b/d : b/d+1;
  k > m ? cout << l - k : cout << l-m;
}