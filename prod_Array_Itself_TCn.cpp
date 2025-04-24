#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // Step 1: Compute prefix products
    int prefix = 1;
    for (int i = 0; i < n; ++i) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Compute suffix products and multiply with prefix
    int suffix = 1;
    for (int i = n - 1; i >= 0; --i) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
