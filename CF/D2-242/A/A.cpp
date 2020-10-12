/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 11.10.2020 18:44:37
 * Last Modified Date: 11.10.2020 19:04:09
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define forn(i, a, b) for (int i = (a); i < (b); ++i)
#define each(x, a) for (auto& x: a)

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
    int a = 0, b = 0;
    for (char c : s) {
        if (c == 'x') a++;
        else b++;
    }
    int mn = abs(n/2 - a);
    cout << mn << endl;
    
    if (a > b) { 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'x') {
                s[i] = 'X';
                a--;
                if (a == n/2) break;
            }
        }
    } else if (b > a) {
        for (int i = 0; i < n; i++) {
            if (s[i] == 'X') {
                s[i] = 'x';
                b--;
                if (b == n/2) break;
            }
        }
    }

    cout << s << endl;
    
    return 0;
}

