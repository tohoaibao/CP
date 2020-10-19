/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 17.10.2020 15:33:45
 * Last Modified Date: 17.10.2020 15:56:34
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

// WA
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = sz(s);
    for (int i = 0; i < n - 5; i++) {
        if (s[i] == 'h') {
            int j = i;
            while (j < n - 4 && s[j] == 'h') j++;
            //dbg(j, s[j]);
            if (j >= n - 4 || s[j] != 'e') break;
            while (j < n - 3 && s[j] == 'e') j++;
            //dbg(j, s[j]);
            if (j >= n - 3 || s[j] != 'l') break;
            
            int cnt = 1;
            while (j < n - 1 && s[j] == 'l'){j++; cnt++;};
            //dbg(j, s[j]);
            if (cnt < 2 || j >= n - 1 || s[j] != 'o') break;
            //dbg(j, s[j]);
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
