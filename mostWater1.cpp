#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max

using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;

    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            int w = j - i;
            int ht = min(height[i], height[j]);
            int currWater = w * ht;
            maxWater = max(maxWater, currWater);
        }
    }

    return maxWater;
}

int main() {
    vector<int> height;
    int n;

    cout << "Enter the number of heights: ";
    cin >> n;

    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        height.push_back(h);
    }

    int result = maxArea(height);
    cout << "Maximum area of water the container can store is: " << result << endl;

    return 0;
}
