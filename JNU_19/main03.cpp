/// 2019-3
/// 输入格子的个数，三种红黄蓝颜色填满连续的个格子，相邻格子的颜色不一样，首尾的颜色也不一样，给出满足要求的方案个数。

#include <bits/stdc++.h>

using namespace std;

// 建立满二叉树（方便起见，使用数组实现二叉树），检索不符合题意的元素。
int JNU_19_3(int n) {
    if(n == 1)
        return 3;
    vector<int> tree(pow(2, n), 0); // [1....2^n - 1]
    tree[1] = 1;
    for (int i = 1; i < pow(2, n - 1); i++) { // [1....2^(n-1)-1]
        if (tree[i] == 1) {
            tree[2 * i] = 2;
            tree[2 * i + 1] = 3;
        }
        if (tree[i] == 2) {
            tree[2 * i] = 1;
            tree[2 * i + 1] = 3;
        }
        if (tree[i] == 3) {
            tree[2 * i] = 2;
            tree[2 * i + 1] = 1;
        }
    }
    int counter = 0;
    for (int i = pow(2, n - 1); i < pow(2, n); i++)
        if (tree[i] != 1)
            counter++;

    int res = counter * 3;
    return res;
}

int main() {
    for(int i = 1; i < 10; i++)
        cout << JNU_19_3(i) << " ";

    return 0;
}
