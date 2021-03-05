/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 14:50:26 UTC+7
 * Last Modified Date: 25.02.2021 14:51:58 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::string s;
    std::cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '1') s[i] = '9';
        else if (s[i] == '9') s[i] = '1';
        else assert(false);
    }
    std::cout << s << '\n';

    return 0;
}

