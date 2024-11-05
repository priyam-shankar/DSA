#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums){
        ans = ans^val;
    }
    return ans;
}
int main(){
    int ans;
    vector<int>nums = {4,1,2,1,2};
    ans = singleNumber(nums); // Assign the result here
    cout<< ans << endl; // Now this will print the unique number
    return 0;
}