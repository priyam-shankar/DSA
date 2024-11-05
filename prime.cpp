/*#include<iostream>
using namespace std;
int main () {
    int n;
    cout <<"Enter n: ";
    cin >> n;
    bool isPrime = true;            // a variable which can have only values true and false
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
        if(isPrime == true){
            cout << "prime no\n";
        }else{
            cout <<"not prime\n";
        }
    return 0;
}*/



#include<iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter n: ";
    cin >> n;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << "prime no\n";
    }else{
        cout <<"not prime\n";
    }
    return 0;
}