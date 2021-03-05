/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 26.02.2021 08:23:45 UTC+7
 * Last Modified Date: 26.02.2021 08:51:26 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    std::cin >> n >> m;
    std::vector<int> A(n + 1), B(m + 1);
    std::cin >> A[0] >> B[0];
    for (int i = 1; i <= n; i++) std::cin >> A[i];
    for (int i = 1; i <= m; i++) std::cin >> B[i];
    int u = *max_element(A.begin(), A.end());
    int v = *min_element(B.begin(), B.end());
    if (u >= v) {
        std::cout << "War\n";
    } else {
        std::cout << "No War\n";
    }

    return 0;
}

