#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a, b, c;
  cin >> a >> b >> c;
  if (a+b==c) cout << "correct!";
  else cout << "wrong!";
}