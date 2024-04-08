#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double ccw(double x1, double x2, double x3, double y1, double y2, double y3){
  return(x1*y2+x2*y3+x3*y1 -y1*x2-y2*x3-y3*x1)/2;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int N;
  double ans;
  cin >> N;
  vector<pair<double,double>> V(N);
  for(int i=0;i<N;i++){
    cin >> V[i].first >> V[i].second;
  }
  for(int i=2;i<N;i++){
    ans += ccw(V[0].first,V[i-1].first,V[i].first,V[0].second,V[i-1].second,V[i].second);
  }
  cout << fixed;
  cout.precision(1);
  cout << abs(ans) << "\n";

}