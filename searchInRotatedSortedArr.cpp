#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& A, int tar) {
    int st = 0, end = A.size()-1;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(A[mid] == tar) {
            return mid;  // answer mera yhi wala line see ayega lekin niche sse answer taiyaar hokr aayega 
        }
        if(A[st] <= A[mid]) { //left part sorted
            if(A[st]<= tar && tar <= A[mid]) {
                end = mid - 1; // left part search
            }else{
                st = mid + 1; // lekin left me target hi nhi hua toh right kr 
            }
        }else { //right part sorted
            if(A[mid] <= tar && A[end] >= tar) {
                st = mid + 1;   //right part search 
            }else {
                end = mid - 1; // lekin agar right me target nhi mila toh left search
            }
        }
    }
    return -1;
}
int main() {
    vector<int> A = {3,4,5,6,7,0,1,2};
    int tar = 0;
    cout << search(A, tar) <<endl;
    return 0;
}