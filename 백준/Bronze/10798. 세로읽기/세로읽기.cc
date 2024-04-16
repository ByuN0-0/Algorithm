#include <iostream>

using namespace std;


int main(){
  char str[5][15] = {"","","","",""};
  for(int i=0;i<5;i++){
    cin >> str[i];
  }
  for(int i=0;i<15;i++){
    for(int j=0;j<5;j++){
      if(str[j][i]!='\0')
      cout << str[j][i];
    }
  }
}