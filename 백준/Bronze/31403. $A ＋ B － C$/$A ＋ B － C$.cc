#include <iostream>
#include <string>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a, b, c;
  cin >> a >> b >> c;
  cout << a+b-c << "\n";
  string sa, sb;
  sa = to_string(a);
  sb = to_string(b);
  int sum = stoi(sa + sb) - c;
  cout << sum << "\n";
}