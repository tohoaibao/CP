/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 13:45:41 UTC+7
 * Last Modified Date: 02.11.2020 13:52:02 UTC+7
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
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> cnt1(26), cnt2(26);
    for (char c : s1) {
        cnt1[c - 'a']++;
    }
    for (char c : s2) {
        cnt2[c - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt2[i] > 0 && cnt1[i] == 0) {
            cout << "-1\n";
            return 0;
        }
        if (cnt2[i] > 0 && cnt1[i] > 0) {
            ans += min(cnt1[i], cnt2[i]);
        }
    }
    cout << ans << '\n';
    return 0;
}

