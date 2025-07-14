#include<iostream>
using namespace std ;

int decToBinary(int decNum) {
    int ans = 0 , pow = 1 ;
    while(decNum > 0) {
         int rem = decNum % 2;
         decNum = decNum / 2;
         ans = ans + (rem * pow);
         pow = pow * 10;
    }
    return ans; 
}
int main() {
    int decNum;
    //cout << "Enter Your Decimal No: " ;
    //cin >> decNum;
    
    for(int i = 0; i<=10; i++) {
        cout << decToBinary(i) << endl;
    }
    return 0;
}