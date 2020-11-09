/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 31.10.2020 10:29:57 UTC+7
 * Last Modified Date: 31.10.2020 10:55:41 UTC+7
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
    int n;
    string s;
    cin >> n >> s;
    int ans1 = 0, ans2 = 0, curr = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '_') {
            curr = 0;
        } else if (s[i] == '(') {
            curr = 0;
            bool ok = true;
            i++;
            while (i < n && s[i] != ')') {
                if (s[i] != '_' && ok) {
                    ans2++;
                    ok = false;
                } else if (s[i] == '_') {
                    ok = true;
                }
                i++;
            }
        } else {
            curr++;
            ans1 = max(ans1, curr);
        }
    }
    cout << ans1 << " " << ans2 << '\n';
    return 0;
}

