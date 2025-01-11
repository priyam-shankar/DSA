#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {        //TC ==> O(nlogn)
    int n = nums.size();

    //sorting using sort function
    sort(nums.begin(), nums.end());

    //freq count
    int freq = 1, ans = nums[0];
    for(int i = 1; i<n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        }else {
            freq = 1;
            ans = nums[i];
        }
        if(freq > n / 2) {
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> nums ={1,2,2,1,1};
    cout << majorityElement(nums) <<endl;
    return 0;
}