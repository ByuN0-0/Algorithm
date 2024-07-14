#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> compare[32001];
int inDegree[32001];

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n, m;
  cin >> n >> m;

  for(int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    compare[a].push_back(b);
    inDegree[b]++;
  }

  int result[32001];
  queue<int> q;

  for(int i=1; i<=n; i++){
    if(inDegree[i] == 0) q.push(i);
  }
  for(int i=1; i<=n; i++){
    if(q.empty()) break;
    int x = q.front();
    q.pop();
    result[i] = x;
    for(int i=0; i<compare[x].size(); i++){
      int y = compare[x][i];
      if(--inDegree[y] == 0) q.push(y);
    }
  }
  for(int i=1; i<=n; i++){
    cout << result[i] << " ";
  }
}