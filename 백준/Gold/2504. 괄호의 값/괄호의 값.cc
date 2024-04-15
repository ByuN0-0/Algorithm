#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main(){
  ios_base::sync_with_stdio(0); //고정
  cin.tie(0); //고정
  cout.tie(0); //고정
  ////////////////////////
  string str;
  int ans=0;
  int temp=1;
  stack<char> st;
  cin >> str;

  for(int i=0;i<str.size();i++){
    if(str[i]=='('){
      temp*=2;
      st.push(str[i]);
    }
    else if(str[i]=='['){ // [(
      temp*=3;
      st.push(str[i]);
    }
    else if(str[i]==')'){
      if(st.empty() || st.top()!='('){
        ans = 0;
        break;
      }
      if(str[i-1]=='('){
        ans+=temp;
        temp/=2;
        st.pop();
      }
      else{
        temp/=2;
        st.pop();
      }
    }
    else if(str[i]==']'){
      if(st.empty() || st.top()!='['){
        ans = 0;
        break;
      }
      if(str[i-1]=='['){
        ans+=temp;
        temp/=3;
        st.pop();
      }
      else{
        temp/=3;
        st.pop();
      }
    }
  }
  if(!st.empty()) ans = 0;
  cout << ans << "\n";
}