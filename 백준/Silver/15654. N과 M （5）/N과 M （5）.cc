#include <iostream>
#include <algorithm>

using namespace std;

int n,m;
int arr[9];
int num[9];
int check[9];

void dfs(int cnt){
  if(cnt == m){
    for(int i=0; i<m; i++){
      cout << arr[i] << ' ';
    }
    cout << '\n';
    return;
  }
  for(int i=0; i<n; i++){
    if (check[i]==0){
      arr[cnt]=num[i];
      check[i]=1;
      dfs(cnt+1);
      check[i]=0;
    }
  }
}
int main(){
  cin >> n >> m;
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  sort(num, num+n);
  dfs(0);
  return 0;
}