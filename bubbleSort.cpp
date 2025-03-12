#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for(int i = 0; i<n-1; i++) {  // kitni baar sort krna hai ye decide krta hai 
        for(int j = 0; j<n-i-1; j++) {  // Ek pass me adjacent elements ko compare & swap karta hai.
            if(arr[j] > arr[j+1]) {
                // swap(arr[j],arr[j+1]);
                // swapping logic  
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
}
void printArray(int arr[], int n ) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};
     bubbleSort(arr,n);
     printArray(arr,n);
    return 0;
}
