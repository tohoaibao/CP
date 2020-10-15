/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 11:16:00
 * Last Modified Date: 15.10.2020 14:35:38
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define forn(i, a, b) for (int i = (a); i < (b); ++i)

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
    if (s.size() < 26) {
        cout << "-1\n";
        return 0;
    }

    for (int i = 0; i <= sz(s) - 26; i++) {
        vector<int> cnt(26);
        vector<int> pos;
        for (int j = i; j < i + 26; j++) {
            if (s[j] != '?') {
                cnt[s[j] - 'A']++;
            } else {
                pos.push_back(j);
            }
        }
        bool flag = true;
        for (int k = 0; k < 26; k++) {
            if  (cnt[k] > 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            int k = 0;
            for (int p : pos) {
                while (k < 26 && cnt[k] != 0) k++;
                s[p] = (char)(k + 'A');
                k++;
            }
            // fill question remain after
            for (int t = 0; t < sz(s); t++) {
                if (s[t] == '?') s[t] = 'A';
            }
            cout << s << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}

