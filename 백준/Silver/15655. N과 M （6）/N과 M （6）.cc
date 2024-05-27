#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int arr[9];
int temp[9];
bool visited[9];
void func(int a, int degree){
  if (degree == M){
    for(int i=0;i<M;i++){
      cout << temp[i] << " ";
    }
    cout << "\n";
  }
  else{
    for(int i=a;i<N;i++){
      if(visited[i]==0){
        visited[i]=1;
        temp[degree]=arr[i];
        func(i+1, degree+1);
        visited[i]=0;
      }
    }
  }
}


int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //

  cin >> N >> M;
  for(int i=0;i<N;i++){
    cin >> arr[i];
  }
  sort(arr, arr+N);
  func(0,0);
}