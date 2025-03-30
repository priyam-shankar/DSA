#include<iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for(int i = 0; i<n-1; i++) {
        int smallestIdx = i;  // i wale element ko smallest maan liya
        for(int j = i + 1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;  // Naya smallest element mil gaya
            }
        }
        swap(arr[i],arr[smallestIdx]);   // Smallest ko i wali position pe fix kar do
    }
}
void printArray(int arr[], int n) {   //array ko print krne ke liye function 
    for(int i = 0; i<n ; i++) {
        cout <<arr[i] <<" ";
    }
    cout << endl;
}
int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}