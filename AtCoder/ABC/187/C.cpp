/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 14:13:15 UTC+7
 * Last Modified Date: 18.02.2021 14:29:46 UTC+7
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
    cin >> n;
    unordered_map<string, int> s1;
    vector<string> s2;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s[0] == '!') s1[s]++;
        else s2.push_back(s);
    }
    for (string ss : s2) {
        if (s1.find('!' + ss) != s1.end()) {
            cout << ss << '\n';
            exit(0);
        }
    }
    cout << "satisfiable" << '\n';

    return 0;
}

