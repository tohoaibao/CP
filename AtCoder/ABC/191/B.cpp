/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 17.02.2021 16:26:04 UTC+7
 * Last Modified Date: 17.02.2021 16:38:14 UTC+7
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
    int n, x, y;
    cin >> n >> x;
    vector<int> A;
    for (int i = 0; i < n; i++) {
        cin >> y;
        if (y != x) A.push_back(y);
    }
    for (int i = 0; i < sz(A); i++) {
        cout << A[i] << ' ';
    }
    cout << endl;
    return 0;
}

