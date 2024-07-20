#include <iostream>
using namespace std;

void trappingRainWater(int *height, int n) {
    int leftMax[20000], rightMax[20000];
    leftMax[0] = INT32_MIN;
    rightMax[n-1] = INT32_MIN;

    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i-1]);
    }

    for(int i=n-1; i>=0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i+1]);
    }
}

int main() {
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    trappingRainWater(height, n);
}