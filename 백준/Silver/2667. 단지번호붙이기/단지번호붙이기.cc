#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int bfs(int arr[][25], int a, int b,int n){
  int dx[] = {0,0,1,-1};
  int dy[] = {1,-1,0,0};
  int nx = 0;
  int ny = 0;
  int x,y;
  int cnt=1;
  arr[a][b]=0;
  queue<pair<int,int>> q;
  q.push({a,b});
  while (q.size()){
    x = q.front().first;
    y = q.front().second;
    q.pop();
    for (int i=0;i<4;i++){
      nx = x+dx[i];
      ny = y+dy[i];
      if (nx<0 || nx>=n || ny<0 || ny>=n) continue;
      if (arr[nx][ny]>0){
        q.push({nx,ny});
        arr[nx][ny]=0;
        cnt++;
      }
    }
  }
  return cnt;
}

int main(){
  int arr[25][25]={0};
  int cnt=0;
  int n;
  vector<int> v;
  cin>>n;
  for(int i=0;i<n;i++){
    string temp;
    cin >> temp;
    for(int j=0;j<n;j++){
      arr[i][j]=temp[j]-'0';
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j]>0){
        v.push_back(bfs(arr,i,j,n));
        cnt++; // cnt는 단지 개수
      }
    }
  }
  sort(v.begin(),v.end());
  cout<<cnt<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  return 0;
}