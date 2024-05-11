#include <iostream>
#include <map>

#define DIV 1000000007
using namespace std;

map<long long, long long> f;

long long fibo(long long n){
  if (n==0) return 0;
  if (n==1) return 1;
  if (n==2) return 1;
  if (f.count(n)>0) return f[n];

  long long m;
  long long prev1, prev2;
  if (n%2 == 0){ // F[n] = F[n/2] * (2F[n/2-1] + F[n/2])
    m = n/2;
    prev1 = fibo(m-1); prev2 = fibo(m);
    f[n] = (2LL * prev1 + prev2) * prev2 % DIV;
    return f[n];
  } // F[n] = F[(n+1)/2]^2 + F[(n-1)/2]^2
  m = (n+1)/2;
  prev1 = fibo(m); prev2 = fibo(m-1);
  f[n] = (prev1 * prev1 + prev2 * prev2) % DIV;
  return f[n];
}
int main(void){
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long n;
  cin >> n;
  cout << fibo(n);
  return 0;
}