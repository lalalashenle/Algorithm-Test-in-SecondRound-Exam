/// 2018-1
/// 斐波那契数列

#include <bits/stdc++.h>

using namespace std;

int JNU_18_1(int n) {
    if (n == 1 || n == 2)
        return 1;
    else
        return JNU_18_1(n - 1) + JNU_18_1(n - 2);
}

int main() {

    for (int i = 1; i < 10; i++)
        cout << JNU_18_1(i) << " ";
    
    return 0;
}
