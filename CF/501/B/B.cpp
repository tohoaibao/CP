/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 15.10.2020 15:33:35
 * Last Modified Date: 15.10.2020 16:09:42
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
    int t;
    cin >> t;
    set<string> set1, set2;
    map<string, string> map;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        map[s1] = s2;
        set1.insert(s1);
        set2.insert(s2);
    }

    for (string value : set2) {
        set1.erase(value);
    }
    cout << set1.size() << endl;
    for (string value : set1) {
        auto it = map.find(value);
        string tmp = value;
        while (it != map.end()) {
            tmp = map[tmp];
            it = map.find(tmp);
        }
        cout << value << " " << tmp << endl;
    }
    return 0;
}

