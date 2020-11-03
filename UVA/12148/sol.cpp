/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 08:24:53 UTC+7
 * Last Modified Date: 03.11.2020 08:47:37 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

string to_string(char c) {
    return string(1, c);
}

string to_string(string s) {
    return s;
}

template<class A, class B> string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template<class T> string to_string(T v) {
    bool f = true;
    string res = "{";
    for (auto &x : v) {
        if (!f) {
            res += ", ";
        }
        f = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}

void DBG() {
    cerr << "]" << endl;
}

template<class H, class... T> void DBG(H h, T... t) {
    cerr << to_string(h);
    if(sizeof...(t))
        cerr << ", ";
    DBG(t...);
}

#ifdef LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 42
#endif

bool isLeapYear(int y) {
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int convert(int d, int m, int y) {
    int numDays = d;
    for (int year = 1900; year < y; year++) {
        numDays += isLeapYear(year) ? 366 : 365;
    }
    vector<int> M = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(y)) M[1] = 29;
    for (int month = 1; month < m; month++) {
        numDays += M[month - 1];
    }
    return numDays;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        vector<pair<int, int>> A(n);
        for (auto &p : A) {
            int d, m, y, c;
            cin >> d >> m >> y >> c;
            p = {convert(d, m, y), c};
        }
        int ans1 = 0;
        ll ans2 = 0;
        for (int i = 1; i < n; i++) {
            if (A[i - 1].first + 1 == A[i].first) {
                ans1++;
                ans2 += A[i].second - A[i - 1].second;
            }
        }
        cout << ans1 << " " << ans2 << '\n';
    }
    return 0;
}

