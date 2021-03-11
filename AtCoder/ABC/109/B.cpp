/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.03.2021 21:31:51 UTC+7
 * Last Modified Date: 04.03.2021 21:39:50 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    std::vector<std::string> A(n);
    for (int i = 0; i < n; i++) std::cin >> A[i];
    std::unordered_set<std::string> st;
    st.insert(A[0]);
    for (int i = 1; i < n; i++) {
        if (st.find(A[i]) != st.end() || A[i][0] != A[i - 1][A[i - 1].size() - 1]) {
            std::cout << "No\n";
            exit(0);
        }
        st.insert(A[i]);
    }
    std::cout << "Yes\n";

    return 0;
}

