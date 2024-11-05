#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& vec, int target) {
    for(int val : vec){
        if(val == target){
            return val;
        }
    }
    return -1;
}
int main(){
    int target = 0;
    vector<int>vec = {4,2,1,5,7,9,0};
    cout << linearSearch(vec,target) <<endl;
    return 0;
}