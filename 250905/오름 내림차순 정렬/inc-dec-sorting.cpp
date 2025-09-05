#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> nums;

int main() {
    cin >> n;
    nums.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), std::less<int>());
    for(int i = 0 ; i < n ; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    sort(nums.begin(), nums.end(), std::greater<int>());
    for(int i = 0 ; i < n ; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    // Please write your code here.

    return 0;
}
