#include <iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> arr, int st, int end, int tar)      //=> TC= O(logn)  & SC = O(logn)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
        {
            return recBinarySearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return recBinarySearch(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{

    vector<int> arr1 = {-1, 0, 3, 5, 9, 12};
    // int st =0, end = arr1.size()-1;
    int tar1 = 0;
    cout << recBinarySearch(arr1, 0, arr1.size() - 1, tar1);
    // cout << recBinarySearch(arr1,st,end,tar1);
    return 0;
}