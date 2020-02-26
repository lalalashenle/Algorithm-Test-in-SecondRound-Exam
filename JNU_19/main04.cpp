/// 2019-4
/// 给定数组arr，返回arr的最长递增子序列

#include <bits/stdc++.h>
// #define MAX(a,b) (((a)>(b))?(a):(b))

using namespace std;

vector<int> JNU_19_4(vector<int> nums) {
    int n = nums.size();
    vector<int> memo(n, 1);
    int max_length = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[i])
                memo[i] = max(memo[i], memo[j] + 1);
        }
        max_length = max(max_length, memo[i]);
    }
    cout << max_length << endl;
    vector<int> res(max_length);
    //int temp = max_length;
    int temp;
    for (int i = n - 1; i >= 0; i--) {
        if (memo[i] == max_length) {
            temp = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (memo[i] == max_length && nums[i] <= nums[temp]) {
            res[max_length - 1] = nums[i];
            max_length--;
            temp = i;
        }
    }
    return res;
}

int main() {
    vector<int> nums = {10, 22, 11, 20, 9, 33, 21, 50, 41, 60, 80, 59, 90};

    vector<int> ans = JNU_19_4(nums);

    for (auto e:ans)
        cout << e << " ";

    return 0;
}
