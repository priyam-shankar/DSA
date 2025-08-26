#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx = m+n-1, i = m - 1, j= n - 1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx] = A[i];
            idx--;i--;
            // A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }

    while(j >= 0) {
        A[idx--] = B[j--];
    }
    
}
void printMergeArray(const vector<int>& arr) {
        for(int x : arr) {
            cout << x <<" ";
        }
        cout << endl;
    }

int main() {
    vector<int> A = {1,2,3,0,0,0};
    vector<int> B = {2,5,6};

    cout << "Given Array A: ";
    printMergeArray(A);

    cout<< "Given Array B: ";
    printMergeArray(B);

    merge(A,3,B,3);

    cout << "Merged Array : ";
    printMergeArray(A);
    return 0;
}