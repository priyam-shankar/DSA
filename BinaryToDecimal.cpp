#include<iostream>
using namespace std;

int BinaryToDec (int binaryNum) {
    int ans = 0 , pow = 1 ;// 2^0 
    while(binaryNum > 0) {
        int lastDigit = binaryNum % 10 ;
        binaryNum = binaryNum / 10;
        ans = ans + (lastDigit * pow);
        pow = pow * 2;
    }
    return ans;
}
int main() {
    int binaryNum ;
    cout << "Enter Your Binary No: " ;
    cin >> binaryNum;
    cout << BinaryToDec (binaryNum);
    return 0;
}