#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countSort(vector<int>& nums) {         // Overall TC : O(2n) => O(n)
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < nums.size(); i++) {     //TC: O(n)
        if(nums[i] == 0) {
            count0++;
        }
        else if(nums[i] == 1) {
            count1++;
        }
        else{
            count2++;
        }
    }
    int Idx = 0;
    for(int j = 0; j < count0; j++) {          //TC: O(n)
        nums[Idx] = 0;
        Idx++;
    }
    for(int j = 0; j < count1; j++) {
        nums[Idx] = 1;
        Idx++;
    }
    for(int j = 0; j < count2; j++) {
        nums[Idx] = 2;
        Idx++;
    }
}
int main() {
    vector<int>nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    countSort(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0; 
}