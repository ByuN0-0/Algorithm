#include <iostream>
#include <climits>

using namespace std;
int main(void){
    long long result=0, overflow=0;
    int n;

    for (int test_case=0; test_case<3; test_case++){
        cin>>n;

        result = 0;
        overflow = 0;

        for (int i=0; i < n; i++){
            long long tmp;
            cin>>tmp;

            if (result > 0 and tmp > 0 and tmp > LLONG_MAX - result) {
                overflow++;
            }

            if (result < 0 and tmp < 0 and tmp < LONG_MIN - result) {
                overflow--;
            }

            result += tmp;
        }

        if (overflow < 0){
            cout << "-\n";
        }
        else if (overflow > 0){
            cout << "+\n";
        }
        else if (result < 0){
            cout << "-\n";
        }
        else if (result > 0){
            cout << "+\n";
        }
        else if (result == 0){
            cout << "0\n";
        }
    }
}