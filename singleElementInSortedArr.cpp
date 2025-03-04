#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();
    if (n == 1) {
        return A[0];
    }

    int st = 0, end = n-1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if(mid == 0 && A[0] != A[1]) {  // ye dono mera edge cases
            return A[mid];
        }
        if(mid == n-1 && A[n-1] != A[n-2]) {    //ye bhi edge cases
            return A[mid];
        }
        if(A[mid - 1] != A[mid] && A[mid] != A[mid + 1]) {  // agar starting wla mid hi answer hua toh
            return A[mid];
        }
        if(mid % 2 == 0){   //even no of elemnts in left or right side 
            if (A[mid] == A[mid - 1]) { // left side jao 
                end = mid - 1;
            }else { //right side jao 
                st = mid + 1;
            }
        }else { //odd no of elements in left or right side 
            if (A[mid] == A[mid - 1]) { //right side jao 
                st = mid + 1;
            }else {  //left side jao 
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main (){
    vector<int> A = {1,1,2,3,3,4,4,8,8};
    cout <<singleNonDuplicate(A)<< endl;
    return 0;
}