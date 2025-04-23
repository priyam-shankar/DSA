#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int base = 3;
    int exponent = 3;
    int ans = 1;

    for (int i = 1; i <= exponent; i++) {
        ans *= base;
    }

    cout << ans << endl;
    return 0;
}
