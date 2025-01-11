/*#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n =  5;
    int arr[n] = {1,2,3,4,5};
    int maxSum = INT_MIN;
    for(int st = 0; st<n; st++) {
        int currSum = 0;
        for(int end = st; end<n; end++) {
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << "Maximum Subarray Sum is: "<<maxSum <<endl;
    return 0;
}*/

#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n =  7;
    int arr[n] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    int start = 0, en = 0;
    for(int st = 0; st<n; st++) {
        int currSum = 0;
        for(int end = st; end<n; end++) {
            currSum += arr[end];
            // maxSum = max(currSum,maxSum);
            if(currSum > maxSum) {
                maxSum = currSum;
                start = st;
                en = end;
            }
            
        }
    }
    cout << "Maximum Subarray Sum is: "<<maxSum <<endl;
    cout << "Maximum Subarray is:" <<endl;
    for(int i = start; i<=en; i++) {
        cout<< arr[i] <<", ";
    }
    cout<<endl;
    return 0;
}