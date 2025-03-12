#include<iostream>
using namespace std;
int main() {
    int a = 5, b = 3;
    a = a + b;  // a = 8
    b = a - b;  // b = 5
    a = a - b;
    cout<< a <<endl;
    cout<< b <<endl;
    return 0;
}