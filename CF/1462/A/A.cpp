/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.12.2020 20:08:28 UTC+7
 * Last Modified Date: 17.12.2020 20:23:27 UTC+7
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < n/2; i++) {
            cout << A[i] << " " << A[n - i - 1] << " ";
        }
        if (n & 1) {
            cout << A[n / 2] << " ";
        }
        cout << endl;
    }
    return 0;
}

