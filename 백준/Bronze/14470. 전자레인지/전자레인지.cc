#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int start, end;
  int c, d, e;
  cin >> start >> end >> c >> d >> e;
  int val;
  val = e * end;
  if(start<0) val += (c * -start) + d;
  else val -= e * start;
  cout << val;
}