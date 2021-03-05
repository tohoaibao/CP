/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 11:20:15 UTC+7
 * Last Modified Date: 25.02.2021 11:21:20 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    if (n == 1) {
        std::cout << "Hello World\n";
    } else if (n == 2) {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    } else assert(false);
    return 0;
}

