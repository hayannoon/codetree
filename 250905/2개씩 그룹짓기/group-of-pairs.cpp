#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int nums[2000];

int main() {
    
    cin >> N;
    vector<int> sums;
    sums.reserve(N);

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    sort(nums, nums+2*N);

    int first = 0;
    int last = 2*N -1;

    while(first < last) {
        sums.push_back(nums[first++] + nums[last--]);
    }
    cout << *max_element(sums.begin(), sums.end());

    // Please write your code here.

    return 0;
}
