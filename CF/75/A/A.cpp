/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 27.10.2020 07:59:02
 * Last Modified Date: 27.10.2020 08:12:07
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int sum1 = a + b;
    string sa, sb;
    for (char c : to_string(a)) {
        if (c != '0') {
            sa += c;
        }
    }
    for (char c : to_string(b)) {
        if (c != '0') {
            sb += c;
        }
    }
    int sum2 = stoi(sa) + stoi(sb);
    string s1;
    for (char c : to_string(sum1)) {
        if (c != '0') s1 += c;
    }
    cout << (s1 == to_string(sum2) ? "YES" : "NO") << '\n';
    return 0;
}

