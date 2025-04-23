#include <iostream>
#include <vector>
#include <algorithm> // For min and max

using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while (lp < rp) {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main() {
    int n;
    cout << "Enter the number of heights: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights: ";
    for (int i = 0; i < n; ++i) {
        cin >> height[i];
    }

    int result = maxArea(height);
    cout << "Maximum area of water the container can store is: " << result << endl;

    return 0;
}
