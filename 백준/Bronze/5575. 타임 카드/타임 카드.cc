#include <iostream>
#include <algorithm>
using namespace std;

void fuc(int h1, int m1, int s1, int h2, int m2, int s2){
  int h=0;
  int m=0;
  int s=0;
  if(s1<=s2) s = s2-s1;
  else{
    s = s2-s1+60;
    m--;
  }
  if(m1<=m2) m += m2-m1;
  else{
    m += m2-m1+60;
    h--;
  }
  h += h2-h1;
  if(s<0){
    s+=60;
    m--;
  }
  if(m<0){
    m+=60;
    h--;
  }
  cout << h << " " << m << " " << s << "\n";
}
int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  for(int i=0;i<3;i++){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    fuc(a,b,c,d,e,f);
  }
}