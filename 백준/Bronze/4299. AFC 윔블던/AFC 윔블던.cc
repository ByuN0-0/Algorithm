#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a, b;
  int h, d;
  cin >> h >> d;
  if ((h+d)%2 || h<d) cout << -1;
  else{
    a = (h+d)/2;
    b = h-a;
    cout << a << " " << b;
  }
}