#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums) {
    sort(nums.begin(), nums.end());
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