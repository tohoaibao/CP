/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 09.11.2020 09:39:09 UTC+7
 * Last Modified Date: 09.11.2020 09:56:46 UTC+7
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

const int MAXN = 1e6 + 1;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<bool> enter(MAXN);
    int ans = 0, curr = 0;
    while (n--) {
        char ch;
        int r;
        cin >> ch >> r;
        if (ch == '+') {
            enter[r] = true;
            curr++;
        } else {
            if (!enter[r]) ans++;
            else curr--;
            enter[r] = false;
        }
        ans = max(ans, curr);
    }
    cout << ans << '\n';
    return 0;
}

