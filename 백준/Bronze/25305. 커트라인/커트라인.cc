#include <iostream>
using namespace std;

int main(){
  int n,k;
  int arr[1001]={0};
  int max=-1;
  int tmp=-1;
  int tmp2=-1;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<k;i++){
    tmp=-1;
    max=-1;
    for(int j=0;j<n;j++){
      if(arr[j]>max){
        max=arr[j];
        tmp=j;
      }
    }
    tmp2=arr[tmp];
    arr[tmp]=-1;
  }
  cout<<tmp2<<"\n";
  return 0;
}