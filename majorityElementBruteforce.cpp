#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int majorityElement(vector<int>& nums) {        //TC ==> O(n^2)
    int n = nums.size();
    for(int val : nums) {
        int freq = 0;
        for(int el : nums) {
            if(el == val) {
                freq++;
            }
        }
        if(freq > n / 2) {
            return val;
        }
    } 
    return -1; 
}
int main() {
    vector<int> nums = {1,2,2,1,1,2,2};
    cout << majorityElement(nums) <<endl;
    return 0;
}