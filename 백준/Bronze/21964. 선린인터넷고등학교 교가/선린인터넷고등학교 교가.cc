#include <iostream>
#include <string>
using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n;
  string str;
  cin >> n;
  cin >> str;
  for(int i=n-5;i<n;i++){
    cout << str[i];
  }
}