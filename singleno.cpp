#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums){
    vector<int> vec = {4,1,0,1,0};
    int ans  = 0;
    for(int val : nums) {
        ans ^= val;
    }
    return ans;
}
int main() {
    vector<int> vec = {4,1,0,1,0};
    cout<< singleNumber(vec)<<endl;
    return 0;
}