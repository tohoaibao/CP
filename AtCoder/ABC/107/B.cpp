/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 06.03.2021 14:24:44 UTC+7
 * Last Modified Date: 06.03.2021 14:32:59 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int h, w;
    std::cin >> h >> w;
    std::vector<std::string> A(h);
    for (int i = 0; i < h; i++) std::cin >> A[i];
    std::vector<bool> row(h, false);
    std::vector<bool> col(w, false);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (A[i][j] == '#') {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        if (row[i]) {
            for (int j = 0; j < w; j++) {
                if (col[j]) std::cout << A[i][j];
            }
            std::cout << '\n';
        }
    }

    return 0;
}

