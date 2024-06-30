#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  string s;
  cin >> s;
  if(s.size() == 3 && s[1] == '0'){
    int a = 10;
    int b = int(s[2]-'0');
    cout << a+b;
  }
  else if(s.size() == 3 && s[2] == '0'){
    int a = int(s[0]-'0');
    int b = 10;
    cout << a+b;
  }
  else if(s.size()==4){
    cout << 20;
  }
  else{
    int a = int(s[0]-'0');
    int b = int(s[1]-'0');
    cout << a+b;
  }
}