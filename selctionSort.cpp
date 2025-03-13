#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for(int i = 0; i<n-1; i++) {
        int min_idx = i;
        for(int j = i + 1; j<n; j++){
            if(arr[min_idx] > arr[j]) {
               min_idx = j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
}
void printArray(int arr[], int n ) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
int main() {
    int n = 5;
    int arr[] = {64, 25, 12, 22, 62};

    selectionSort(arr, n);
    printArray(arr,n);
    return 0;
}