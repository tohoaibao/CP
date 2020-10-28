/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 10:34:45
 * Last Modified Date: 15.10.2020 10:46:00
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
    vector<string> A(3);
    for (string &s : A) {
        getline(cin, s);
    }
    auto isVowel = [&](char c) {
        return c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i';
    };
    vector<int> B;
    for (string &s : A) {
        int cnt = 0;
        for (char c : s) {
            if (isVowel(c)) cnt++;
        }
        B.push_back(cnt);
    }
    if (B[0] == 5 && B[1] == 7 && B[2] == 5) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}

