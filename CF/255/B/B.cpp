/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 30.10.2020 11:29:31
 * Last Modified Date: 30.10.2020 12:04:00
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

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    while (true) {
        bool ok1 = true;
        for (int i = 1; i < sz(s); i++) {
            if (s[i - 1] == 'y' && s[i] == 'x') {
                swap(s[i - 1], s[i]);
                ok1 = false;
                break;
            }
        }
        bool ok2 = true;
        if (ok1) {
            for (int i = 1; i < sz(s); i++) {
                if (s[i - 1] == 'x' && s[i] == 'y') {
                    s.erase(i - 1, 2);
                    ok2 = false;
                    break;
                }
            }
        }
        if (ok1 && ok2) break;
    }
    cout << s << '\n';
    return 0;
}

