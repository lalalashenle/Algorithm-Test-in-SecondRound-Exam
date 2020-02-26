/// 2018-2
/// 蛇形矩阵

#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > JNU_18_2(int n) {
    vector<vector<int> > memo(n, vector<int>(n));
    int k = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // 正序
            for (int j = 0; j < n; j++)
                memo[i][j] = k++;
        } else { // 倒序
            for (int j = n - 1; j >= 0; j--)
                memo[i][j] = k++;
        }
    }
    return memo;
}

int main() {

    int n = 6;
    vector<vector<int> > res = JNU_18_2(n);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
