/// 2018-4
/// 求最大子序列的和，输入一系列的整数，求出该序列中的最大连续子序列的和，并输出该子序列的首尾位置。

#include <bits/stdc++.h>

using namespace std;

void JNU_18_4(vector<int> nums) { // [1, -3, 7, 8, -4, 12, -10, 6]
    int n = nums.size();
    vector<int> memo(n, 0);
    memo[0] = nums[0];
    int max_e = -9999;
    int start, end;
    for (int i = 1; i < n; i++) {
        memo[i] = max(memo[i - 1] + nums[i], nums[i]);
        if (max_e < memo[i]) {
            max_e = memo[i];
            end = i;
        }
    }
//    for(auto a : memo)
//        cout << a << " ";
    cout << max_e << " ";
    for (int i = end; i >= 0; i--) {
        max_e -= nums[i];
        if (max_e == 0) {
            start = i;
            break;
        }
    }
    cout << start+1 << " " << end+1;

}

int main() {

    vector<int> nums = {1, -3, 7, 8, -4, 12, -10, 6};
    JNU_18_4(nums);

    return 0;
}
