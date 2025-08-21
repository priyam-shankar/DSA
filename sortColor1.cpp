#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }
    int idx = 0;
    while(idx < nums.size()) {
        if(count0 > 0) {
            nums[idx] = 0;
            idx ++;
            count0--;
        }
        else if(count1 > 0) {
            nums[idx] = 1;
            idx++;
            count1--;
        }
        else {
            nums[idx] = 2;
            idx++;
            count2--;
        }
    }
}
int main() {
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(int i = 0; i<nums.size(); i++) {
        cout<<nums[i];
        if(i != nums.size()-1){
            cout<< ", ";
        }
    }
    return 0;
}