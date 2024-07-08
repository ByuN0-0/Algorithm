#include <iostream>
#include <vector>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    int a = -1;
    int b = -1;
    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      if (a<temp) a = temp;
    }
    for(int i = 0; i < m; i++){
      int temp;
      cin >> temp;
      if (b<temp) b = temp;
    }
    if(a>=b) cout << "S\n";
    else cout << "B\n";
  }
}