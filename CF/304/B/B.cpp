/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 14:04:53 UTC+7
 * Last Modified Date: 03.11.2020 14:12:22 UTC+7
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

int convert(int y, int m, int d) {
    int numDays = d;
    for (int i = 1900; i < y; i++) {
        numDays += isLeapYear(i) ? 366 : 365;
    }
    vector<int> M = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(y)) M[1] = 29;
    for (int i = 1; i < m; i++) {
        numDays += M[i - 1];
    }
    return numDays;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int y1, m1, d1, y2, m2, d2;
    scanf("%d:%d:%d", &y1, &m1, &d1);
    scanf("%d:%d:%d", &y2, &m2, &d2);
    cout << abs(convert(y1, m1, d1) - convert(y2, m2, d2)) << '\n';
    return 0;
}

