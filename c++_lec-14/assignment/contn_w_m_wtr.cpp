//container with most water problem
#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
       int maxW = 0;
       int lp = 0, rp = height.size() -1;

       while(lp < rp) {
        int w = rp-lp;
        int ht = min(height[lp], height[rp]);
        int currW = w * ht;
        maxW = max(maxW, currW);

        height[lp]<height[rp] ? lp++ : rp--;
       }
        return maxW;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height) << endl;
    return 0;
}