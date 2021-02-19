/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 16:31:33 UTC+7
 * Last Modified Date: 18.02.2021 16:32:21 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> A(4);
    for (int &a : A) cin >> a;
    cout << *min_element(all(A)) << '\n';
    return 0;
}

