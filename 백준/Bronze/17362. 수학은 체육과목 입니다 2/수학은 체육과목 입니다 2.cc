#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    n %= 8;
    cout<<(n > 5 || n == 0 ? (10 - n) % 8 : n);
    return 0;
}