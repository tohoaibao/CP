/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 04.03.2021 21:05:03 UTC+7
 * Last Modified Date: 04.03.2021 21:20:28 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::string s, t;
    std::cin >> s >> t;
    assert(s.size() == t.size());
    std::vector<int> A(26), B(26);
    for (int i = 0; i < (int)s.size(); i++) {
        A[s[i] - 'a']++;
        B[t[i] - 'a']++;
    }
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
    for (int i = 0; i < 26; i++) {
        if (A[i] != B[i]) {
            std::cout << "No\n";
            return 0;
        }
    }
    std::cout << "Yes\n";

    return 0;
}

