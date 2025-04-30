#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortColors(vector<int>& nums){
    sort(nums.begin(), nums.end());
}
int main() {
    vector<int>nums = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortColors(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}