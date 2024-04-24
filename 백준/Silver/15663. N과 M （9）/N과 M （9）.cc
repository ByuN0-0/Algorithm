#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[8];
int res[8];
int visited[8];

void dfs(int depth){
  if(depth==M){
    for(int i=0;i<M;i++){
      cout << res[i] << " ";
    }
    cout << "\n";
  }
  int prev=0;
  for(int i=0;i<N;i++){
    if(!visited[i]&&arr[i]!=prev){
      res[depth]=arr[i];
      prev = arr[i];
      visited[i]++;
      dfs(depth+1);
      visited[i]--;
    }
  }
}
int main(void){
  cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);
  //
  cin >> N >> M;
  for(int i=0;i<N;i++){
    cin >> arr[i];
  }
  sort(arr,arr+N);
  dfs(0);
}