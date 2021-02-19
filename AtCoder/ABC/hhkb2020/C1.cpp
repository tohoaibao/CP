/**
 * File              : C1.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 15:58:58 UTC+7
 * Last Modified Date: 19.02.2021 16:06:16 UTC+7
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
    int n;
    cin >> n;
    vector<int> A(200001);
    int curr = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        A[x]++;
        while (A[curr]) curr++;
        cout << curr << '\n';
    }
    return 0;
}

