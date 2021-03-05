/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 15:01:15 UTC+7
 * Last Modified Date: 25.02.2021 15:06:28 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    int f = n / 100;
    int curr = f*100 + f*10 + f;
    f++;
    int next = f*100 + f*10 + f;
    if (n <= curr) {
        std::cout << curr << '\n';
    } else if (n > curr) {
        std::cout << next << '\n';
    }
    return 0;
}

