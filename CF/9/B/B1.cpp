/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 14:50:15 UTC+7
 * Last Modified Date: 10.11.2020 15:02:21 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

const double eps = 1e-8;

double distance(int x1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y2, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, vb, vs;
    cin >> n >> vb >> vs;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int x2, y2;
    cin >> x2 >> y2;
    int ans = -1;
    double timeMin = 1e16;
    for (int i = 1; i < n; i++) {
        double time = (double)A[i]/vb + distance(A[i], x2, y2)/vs;
        if (time < timeMin + eps) {
            timeMin = time;
            ans = i + 1;
        }
    }
    cout << ans << '\n';

    return 0;
}

