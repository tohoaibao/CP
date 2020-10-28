/**
 * File              : A1.cpp
 * Author            : Bao To Hoai
 * Date              : 17.10.2020 15:59:03
 * Last Modified Date: 17.10.2020 16:22:11
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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
    string s;
    cin >> s;
    int n = sz(s);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'h') {
            for (int j = i + 1; j < n; j++) {
                if (s[j] == 'e') {
                    for (int k = j + 1; k < n; k++) {
                        if (s[k] == 'l') {
                            cnt++;
                            if (cnt >= 2) {
                                for (int l = k + 1; l < n; l++) {
                                    if (s[l] == 'o') {
                                        cout << "YES\n";
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "NO\n";

    return 0;
}

