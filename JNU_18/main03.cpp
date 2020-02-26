/// 2018-3
/// 任意一个偶数都可以拆分为两个素数之和，请输入一个偶数，然后将其写成两个素数之和的形式，若有多种结果时，分行输出结果。

#include <bits/stdc++.h>

using namespace std;

void JNU_18_3(int n) {
    vector<bool> memo(n + 1, true); // [0.....n]
    memo[0] = false;
    memo[1] = false;
    for (int i = 2; i <= n; i++) {
        if (memo[i] == true) {
            for (int k = i * i; k <= n; k += i)
                memo[k] = false;
        }
    }
    for (int i = 2; i <= n / 2; i++) // 都是偶数
        if (memo[i] && memo[n - i])
            cout << n << "=" << i << "+" << n - i << endl;
}

int main() {

    int n = 10;
    JNU_18_3(n);

    return 0;
}
