#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int arr[6];
  int mini = 101;
  int sum = 0;
  for(int i=0;i<6;i++){
    cin >> arr[i];
    sum += arr[i];
    if(i<4 && mini>arr[i]) mini = arr[i];
  }
  sum = sum - mini - min(arr[4],arr[5]);
  cout << sum;
}