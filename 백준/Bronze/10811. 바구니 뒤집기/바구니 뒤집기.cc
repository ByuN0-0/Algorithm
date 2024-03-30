#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int arr[100];
  for(int i = 1; i <= N; i++){
    arr[i]=i;
  }
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    for(int j = 0; j <= (b-a)/2; j++){
      swap(arr[a+j], arr[b-j]);
    }
  }
  for(int j = 1; j <= N; j++){
    cout << arr[j] << " ";
  }
}