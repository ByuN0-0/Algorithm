#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int sum = 0;
  while(true){
    int a;
    cin >> a;
    if(a == -1) break;
    sum += a;
  }
  cout << sum;
}