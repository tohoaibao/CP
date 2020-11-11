/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 14:11:05 UTC+7
 * Last Modified Date: 10.11.2020 14:46:52 UTC+7
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

double getDistance(int x1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, v1, v2;
    cin >> n >> v1 >> v2;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int x2, y2;
    cin >> x2 >> y2;
    int ans = 2;
    // time = time(bus) + time(student)
    // time(bus) = A[i]/v1
    // time(student) = dist/v2
    double minTime = (double)A[1] / v1 + getDistance(A[1], x2, y2) / v2;
    for (int i = 2; i < n; i++) {
        double time = (double)A[i] / v1 + getDistance(A[i], x2, y2) / v2;
        if (time <= minTime) {
            minTime = time;
            ans = i + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}

