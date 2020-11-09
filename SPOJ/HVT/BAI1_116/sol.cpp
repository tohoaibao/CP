/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 09:07:48 UTC+7
 * Last Modified Date: 06.11.2020 09:22:03 UTC+7
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
    vector<double> A(n);
    double sum = 0.0, sumNeg = 0.0, sumPosEven = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sum += A[i];
        if (A[i] < 0) sumNeg += A[i];
        if ((i + 1) % 2 == 0) sumPosEven += A[i];
    }
    double avg = sum / n;
    cout << fixed << setprecision(2);
    cout << sum << " " << avg << " " << sumNeg << " " << sum - sumNeg << " " << sumPosEven << " " << sum - sumPosEven << "\n";

    double minDiff = abs(A[0] - avg);
    int pos = 0;
    for (int i = 1; i < n; i++) {
        double diff = abs(A[i] - avg);
        if (diff < minDiff) {
            pos = i;
            minDiff = diff;
        }
    }
    cout << A[pos] << '\n';

    double x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            cout << i + 1 << '\n';
            break;
        }
    }

    return 0;
}

