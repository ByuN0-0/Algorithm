#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  long long a, b, c;
  int ret;
  cin >> a >> b >> c;
  ret = max((double)a*b/c,((double)a/b)*c);
  cout << ret;
}