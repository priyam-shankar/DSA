//Concept : for apllying the bubble sort algo on any array :(i). (n-1) iteration ; mtlb We have to apply (n-1)loop 
//                                                          (ii).  Compare the adjacent elements
//                                                          (iii). larger elements ko last me push krna h; using swapping 
// Overall concept : n-1 iteration mtlb mtlb ki 1st iteration se last - 1 iteration tk hm largest elemnts ko last me push krte jaate h.
// toh 1st iteration me hmara sabse largest element last me push ho jayega or aise hi krte krte n-1 iterartion tk sare largest elements last me push ho jayenge mtlb hmrara array ascending order me sort ho jayega.
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
