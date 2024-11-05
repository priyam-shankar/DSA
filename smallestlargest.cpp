/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int sz = 6;
    int arr[sz];
    int smallest = INT_MAX;
    cout<<"input your array elements:"<<endl;
    for(int i = 0; i < sz; i++){
        cin>> arr[i];
    }
    for(int i = 0; i<sz; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
     cout << "Your smallest elements of the array is:" <<smallest <<endl;
    return 0;
}
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int sz = 6;
    int arr[sz];
    int index;
    int largest = INT_MIN;
    cout<<"input your array elements:"<<endl;
    for(int i = 0; i < sz; i++){
        cin>> arr[i];
    }
    for(int i = 0; i<sz; i++){
        if(largest < arr[i]){
            largest = arr[i];
            index = i; 
        }
       
    }
    cout << "Your largest elements of the array is:" <<largest <<endl;
    cout << "The index of the largest element is: " << index << endl;

    return 0;
}