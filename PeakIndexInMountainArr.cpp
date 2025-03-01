#include <iostream>
#include <vector>
using namespace std;

int peakIndexMountainArray(vector<int>& A) {
    int st = 1, end = A.size()-2;
    while(st <= end) {
        int mid = st + (end - st)/2;
        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]) {
            return mid;
        }else if(A[mid] > A[mid-1]) {   //increasing slope => peak index :> right side me 
           st = mid + 1;
        }else { //decresing slope => peak index :> left side me 
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> A = {0,3,8,9,5,2};
    cout << peakIndexMountainArray(A) <<endl;
    return 0;
}