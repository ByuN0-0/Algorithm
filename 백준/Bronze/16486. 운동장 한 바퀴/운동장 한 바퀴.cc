#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a,b;
  float pi = 3.141592;
  cin >> a >> b;
  cout.precision(6);
  cout << fixed;
  cout << a*2 + b*2*pi;
}