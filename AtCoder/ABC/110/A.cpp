/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 16:01:53 UTC+7
 * Last Modified Date: 25.02.2021 16:03:52 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::vector<int> A(3);
    std::cin >> A[0] >> A[1] >> A[2];
    std::sort(A.rbegin(), A.rend());
    std::cout << A[0]*10 + A[1] + A[2] << '\n';

    return 0;
}

