#include <iostream>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int T;
  cin >> T;
  for(int i=1;i<=T;i++){
    int a, b;
    cin >> a >> b;
    cout << "Case " << i << ": " << a+b << "\n";
  }
}