#include <iostream>
using namespace std;


int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  char a;
  cin >> a;
  if (a=='N' || a=='n'){
    cout << "Naver D2" << "\n";
  }
  else cout << "Naver Whale" << "\n";
}