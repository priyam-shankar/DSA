// #include<iostream>
// #include<vector>
// using namespace std;

// int singleNonDuplicate(vector<int>& A) {
//     int n = A.size();
//     if(n == 1) return A[0];
//     int st = 0, end = n-1;
    
//      while (st <= end) {
//         int mid = st + (end - st) / 2;
//         if(mid == 0 && A[mid] != A[mid + 1]) return A[mid];
//         if(mid == n-1 && A[mid] != A[mid - 1]) return A[mid];

//         if(mid % 2 == 0) {  //even no of elements in left or right side of mid 
//             if(A[mid - 1] == A[mid]) {  //left side jao
//                 end = mid - 1;
//             }else { // right side jao
//                 st = mid + 1; 
//             }
//         }else { //odd no of elements in left or right side of mid 
//             if(A[mid - 1] == A[mid]) {  // right side jao
//                 st = mid + 1;
//             }else { //left side jao
//                 end = mid - 1;
//             }
//         }
//      } 

// }
// int main() {
//     vector<int> A = {1,1,2,3,3,4,4,8,8};
//     cout << singleNonDuplicate(A) <<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
    int n = A.size();
    if(n == 1) return A[0]; // Agar ek hi element hai, toh wahi answer hoga

    int st = 0, end = n-1;
    
    while (st < end) {
        int mid = st + (end - st) / 2;

        // Ensure mid is even (so we always check pairs correctly)
        if (mid % 2 == 1) {
            mid--;
        }

        // If mid and mid+1 are same, single element lies on right side
        if (A[mid] == A[mid + 1]) {
            st = mid + 2; // Move right
        } else {
            end = mid; // Move left
        }
    }
    return A[st];
}

int main() {
    vector<int> A = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(A) << endl;
    return 0;
}
