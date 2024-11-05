#include<iostream>
using namespace std;
int main() {
    int n =10;
    for(int i = 1; i<=n; i++) {//outer loop ==> //Line
        /*cout <<"*****" << endl;*/    /*==>*/int m = 5;
                                            for(int j = 1; j<=m; j++){ //Inner loop ==> n tk ke liye inner loop m times run krega 
                                            cout << "*";
                                            }
                                            cout << endl;
    }
    return 0;
}