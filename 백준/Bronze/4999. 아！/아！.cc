#include <iostream>
#include <string>

using namespace std;


int main(void){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  string jh;
  string doc;
  cin >> jh;
  cin >> doc;
  if(jh.size()>=doc.size()) cout << "go" << "\n";
  else cout << "no" << "\n";
}