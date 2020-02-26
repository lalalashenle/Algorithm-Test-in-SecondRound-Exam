/// 2019-1
/// 输入一个整数 ，通过递归打印其阶乘 n!

#include <bits/stdc++.h>

using namespace std;

int _JNU_19_1(int x) {
    if(x == 1)
        return 1;
    if (x > 1)
        return x * _JNU_19_1(x - 1);
}

int JNU_19_1(int x) {
    return _JNU_19_1(x);
}

int main() {
    int x;
    cin >> x;
    x = JNU_19_1(x);

    cout << x;

    return 0;
}
