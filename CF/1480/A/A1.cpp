/**
 * File              : A1.cpp
 * Author            : Bao To Hoai
 * Date              : 16.02.2021 16:37:15 UTC+7
 * Last Modified Date: 16.02.2021 16:38:59 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <iostream>
#include <fstream>
 
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < sz(s); i++) {
        if (i % 2 == 0) {
            s[i] = s[i] == 'a' ? 'b' : 'a';
        } else {
            s[i] = s[i] == 'z' ? 'y' : 'z';
        }
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

