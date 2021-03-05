/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 25.02.2021 15:27:26 UTC+7
 * Last Modified Date: 25.02.2021 15:50:41 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

// WA
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    assert(n % 2 == 0);
    std::unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        mp[x]++;
    }
    if (mp.size() == 2) {
        std::cout << "0\n";
    } else if (mp.size() == 1) {
        std::cout << n/2 << '\n';
    } 
    else {
        std::vector<int> A;
        int ans = 0;
        for (auto a : mp) {
            ans += a.second;
            A.push_back(a.second);
        }
        std::sort(A.rbegin(), A.rend());
        ans = ans - A[0] - A[1];
        std::cout << ans << '\n';
    }

    return 0;
}

