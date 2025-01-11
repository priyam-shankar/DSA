#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//moore voting algo
int majorityElement(vector<int>& nums) {    //TC ==> O(n)
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i = 0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            freq++;
        }else {
            freq--;
        }
    }
    // return ans;

    int count = 0;
    for(int val : nums) {
        if (val == ans) {
            count++;
        }
    }
    if(count > n / 2) {
        return ans;
    } else {
        return -1;  // No majority element
    }

}
int main() {
    vector<int> nums ={1,2,2,1,1};
    cout << majorityElement(nums) <<endl;
    return 0;
}