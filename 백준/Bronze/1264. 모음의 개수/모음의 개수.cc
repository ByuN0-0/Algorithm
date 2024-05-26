#include <iostream>
#include <string>

using namespace std;

int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //
  while(true){
    int cnt = 0;
    string str;
    getline(cin,str);
    if(str[0]=='#') break;
    for(int i=0;i<str.length();i++){
      if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        cnt++;
      }
    }
    cout << cnt <<"\n";
  }
}