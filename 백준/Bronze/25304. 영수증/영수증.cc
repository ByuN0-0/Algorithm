#include <iostream>
using namespace std;

int main(){
  int x,n;
  int sum=0;
  cin>>x;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    sum += a*b;
  }
  if (x==sum){
    cout<<"Yes"<<"\n";
  }
  else{
    cout<<"No"<<"\n";
  }
  return 0;
}