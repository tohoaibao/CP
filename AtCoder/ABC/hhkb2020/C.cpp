/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 19.02.2021 15:48:46 UTC+7
 * Last Modified Date: 19.02.2021 15:57:40 UTC+7
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
    vector<bool> A(200001);
    int next = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == next) {
            for (int j = next + 1; j < 200001; j++) {
                if (!A[j]) {
                    next = j;
                    break;
                }
            }
        }
        A[x] = true;
        cout << next << '\n';
    }
    return 0;
}

