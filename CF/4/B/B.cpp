/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 08:46:29 UTC+7
 * Last Modified Date: 10.11.2020 09:00:52 UTC+7
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
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pair<int, int>> A(d);
    int min_sum = 0, max_sum = 0;
    for (auto &a : A) {
        cin >> a.first >> a.second;
        min_sum += a.first;
        max_sum += a.second;
    }
    if (sumTime < min_sum || sumTime > max_sum) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    for (auto a : A) {
        int min_v = min(a.second, sumTime - min_sum + a.first);
        cout << min_v << " ";
        sumTime -= min_v;
        min_sum -= a.first;
    }
    return 0;
}

