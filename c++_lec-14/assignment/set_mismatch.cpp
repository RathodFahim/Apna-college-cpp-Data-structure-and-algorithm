#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;    

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    unordered_set<int> seen;
    int duplicate = -1, missing = -1;

    for (int i = 0; i < n; i++) {
        if (seen.find(nums[i]) != seen.end()) {
            duplicate = nums[i];
        } else {
            seen.insert(nums[i]);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (seen.find(i) == seen.end()) {
            missing = i;
            break;
        }
    }

    return {duplicate, missing};
}
int main() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = findErrorNums(nums);
    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
// This code finds the duplicate and missing numbers in an array of size n.