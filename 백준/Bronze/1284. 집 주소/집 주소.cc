#include <iostream>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  while(true){
    int sum=1;
    string p;
    getline(cin, p);
    if(p[0]=='0' && p.length()==1) break;
    for(int i=0;i<p.length();i++){
      if(p[i]=='1') sum += 2;
      else if(p[i]=='0') sum+=4;
      else sum += 3;
      sum +=1;
    }
    cout << sum << "\n";
  }
}