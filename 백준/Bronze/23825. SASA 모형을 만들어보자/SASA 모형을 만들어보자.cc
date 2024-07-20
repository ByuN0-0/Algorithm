#include <iostream>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int a,b;
  cin >> a >> b;
  a/2 < b/2 ? cout << a/2 : cout << b/2;
}