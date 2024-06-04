#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  cout.tie(NULL);
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  //
  int n;
  int arr[100001];
  int s, e;
  int rs, re;
  int mini;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  s = 0;
  e = n-1;
  mini = abs(arr[s]+arr[e]);
  rs = 0;
  re = n-1;
  while(s<e){
    int hap = arr[s]+arr[e];
    if (abs(hap)<mini) {
      mini = abs(hap);
      rs = s;
      re = e;
    }
    if (hap<0) s++;
    else e--;
  }

  cout << arr[rs] << " " << arr[re];
}