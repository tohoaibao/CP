/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 13:37:07 UTC+7
 * Last Modified Date: 25.02.2021 13:58:34 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    std::vector<int> X(1001), Y(1001), H(1001);
    std::tuple<int, int, int> G = {-1, -1, -1};
    for (int i = 1; i <= n; i++) {
        std::cin >> X[i] >> Y[i] >> H[i];
        if (H[i] >= 1) G = {X[i], Y[i], H[i]};
    }
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            int curr = std::get<2>(G) + std::abs(std::get<0>(G) - i) + std::abs(std::get<1>(G) - j);
            curr = std::max(curr, 0);
            bool flag = true;
            for (int k = 1; k <= n; k++) {
                int next = curr - std::abs(X[k] - i) - std::abs(Y[k] - j);
                next = std::max(next, 0);
                if (H[k] != next) flag = false;
            }
            if (flag) {
                std::cout << i << " " <<  j << " " << curr << '\n';
                exit(0);
            }
        }
    }
    return 0;
}

