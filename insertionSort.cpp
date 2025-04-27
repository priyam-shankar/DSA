void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}
int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}