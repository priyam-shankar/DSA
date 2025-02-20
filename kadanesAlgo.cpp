#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxSubarray(vector<int>& nums) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int val : nums) {
        currSum += val;
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main() {
    vector<int> nums = {3,-4,5,4,-1,7,-8};
    //int maxSum = INT_MIN;
    cout<< maxSubarray(nums) <<endl;
printf("thank u");
    return 0;
    
}
