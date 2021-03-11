/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 07.03.2021 20:47:21 UTC+7
 * Last Modified Date: 07.03.2021 20:58:42 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

// CS
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N, K;
    std::cin >> N >> K;
    std::vector<int> A(N);
    bool f = false;
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
        if (A[i] == 0) f = true;
    }
    if (!f) {
        A.push_back(0);
        std::sort(A.begin(), A.end());
    }

    return 0;
}

