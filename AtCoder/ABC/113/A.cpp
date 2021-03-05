/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 09:34:06 UTC+7
 * Last Modified Date: 25.02.2021 09:35:30 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int x, y;
    std::cin >> x >> y;
    assert(y % 2 == 0);
    std::cout << x + y/2 << '\n';

    return 0;
}

