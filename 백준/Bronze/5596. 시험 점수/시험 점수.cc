#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a,b,c,d;
  int e,f,g,h;
  cin >> a >> b >> c >> d;
  cin >> e >> f >> g >> h;
  if(a+b+c+d<e+f+g+h) cout << e+f+g+h;
  else cout << a+b+c+d;
}