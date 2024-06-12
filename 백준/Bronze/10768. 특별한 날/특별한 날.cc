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
  cin >> a >> b;
  if (a<2) cout << "Before";
  else if (a==2){
    if(b<18) cout << "Before";
    else if(b==18) cout << "Special";
    else cout << "After";
  }
  else cout << "After";
}