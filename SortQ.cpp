#include<iostream>
using namespace std;
void sort(int arr[], int n ) {
    for (int i = 0; i < n - 1; i++) {
        bool isSwap = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false) {
            return;
        }
    }
}
void printArray(int arr[], int n ) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
int main() {
    int n = 10;
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sort(arr,n);
    printArray(arr,n);
    return 0;
}