#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n;
  cin >> n;
  cin.ignore();
  for(int i=1;i<=n;i++){
    string str;
    getline(cin, str);
    cout << i << ". " << str << "\n";
  }
}