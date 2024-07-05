#include <iostream>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n, w, h, l;
  cin >> n >> w >> h >> l;
  (w/l) * (h/l) >= n ? cout << n : cout << (w/l) * (h/l);
}