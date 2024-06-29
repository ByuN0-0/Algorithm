#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a,b,c;
  cin >> a >> b >> c;
  if (a>b) swap(a,b);
  if (a>c) swap(a,c);
  if (b>c) swap(b,c);
  cout << a << " " << b << " " << c << endl;
}