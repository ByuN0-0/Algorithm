#include <iostream>
#include <cmath>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n;
  cin >> n;
  cout << pow(2, n);
}