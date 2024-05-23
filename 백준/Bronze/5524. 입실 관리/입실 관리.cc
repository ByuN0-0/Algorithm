#include <iostream>
#include <string>

using namespace std;

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  int N;
  cin >> N;
  while(N--){
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
      if(str[i]>='A'&&str[i]<='Z'){
        str[i]+=32;
      }
    }
    cout << str << "\n";
  }
}