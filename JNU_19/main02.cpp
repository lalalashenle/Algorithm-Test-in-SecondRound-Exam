/// 2019-2
/// 输入一个字符串，判断其是否为回文。打印 Yes 或 No

#include <bits/stdc++.h>

using namespace std;

bool JNU_19_2(string s) {
    int n = s.size();
    if(n == 1)
        return true;
    int i = 0, j = n-1;
    while(i < j) {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    bool ans = JNU_19_2(s);

    if(ans)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
