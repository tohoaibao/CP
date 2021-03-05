/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 10:04:14 UTC+7
 * Last Modified Date: 25.02.2021 11:06:20 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    std::cin >> n >> m;
    std::vector<int> P(m), Y(m), A(m), B(m);
    std::vector<std::pair<int, int>>V[100005];
    for (int i = 0; i < m; i++) {
        std::cin >> P[i] >> Y[i];
        A[i] = P[i];
        V[P[i] - 1].push_back({Y[i], i});
    }
    for (int i = 0; i < n; i++) {
        std::sort(V[i].begin(), V[i].end());
        for (int j = 0; j < (int)V[i].size(); j++) {
            B[V[i][j].second] = j;
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%06d%06d\n", A[i], B[i] + 1);
    }

    return 0;
}

