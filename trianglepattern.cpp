/*#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {   //==>jo hm condition likhe h utne baar print krwana h ye yaad rkho or jisko print krwana h usko cout krwa do!
            cout<<"*";
        }
        cout<< endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    int n = 4;
    //int num = 1;
    for(int i=0; i<n; i++) {
         
        for(int j=0; j<i+1; j++) {
            cout<< i+1 <<" ";
           
        }
        cout << endl;
    }
    return 0;
}*/

#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i=0; i<n; i++) {
        
        for(int j=0; j<i+1; j++) {
            char ch = 'A';
            ch += i;
            cout << ch;
            ch += 1;
        }
        cout<< endl;
    }
    return 0;
}