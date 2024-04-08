#include <iostream>
#include <vector>
using namespace std;

double ccw(double x1, double x2, double x3, double y1, double y2, double y3){
  return(x1*y2+x2*y3+x3*y1 -y1*x2-y2*x3-y3*x1)/2;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  double ans;

  vector<pair<double,double>> V(3);
  for(int i=0;i<3;i++){
    cin >> V[i].first >> V[i].second;
  }
  if (ccw(V[0].first,V[1].first,V[2].first,V[0].second,V[1].second,V[2].second)<0) cout << -1;
  else if(ccw(V[0].first,V[1].first,V[2].first,V[0].second,V[1].second,V[2].second)>0) cout << 1;
  else cout << 0;
}