#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prevIdx = i-1;

        while(prevIdx >= 0 && arr[prevIdx] > curr) {
            arr[prevIdx+1] = arr[prevIdx];
            prevIdx--; // prev = -1 ab pure ke liye 
        }

        arr[prevIdx+1] = curr; //yaani ki arr[-1+1] ; b/c prev = -1
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
