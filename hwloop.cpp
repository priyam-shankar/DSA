/*#include<iostream>
using namespace std;
int main() {
    int n,sum = 0;
    cout <<"Enter n: ";
    cin>> n;
    for(int i = 1; i<=n; i++){
        if(i%3 == 0){
            sum += i;
        }
    }
    cout<<"Sum of n no which is divisible by 3 is: "<<sum;
    return 0;
}*/

#include<iostream>
using namespace std;
int main() {
    int n = 8;
    int fact = 1;
    for(int i = 1; i<=n; i++) {
        fact *= i;
    }
    cout << fact;
    return 0;
}