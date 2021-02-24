/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 22.02.2021 13:28:27 UTC+7
 * Last Modified Date: 22.02.2021 14:02:45 UTC+7
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
    int n, k;
    cin >> n >> k;
    auto f = [&](int num) {
        string s1 = to_string(num);
        string s2 = s1;
        sort(s1.rbegin(), s1.rend());
        sort(all(s2));
        int n1 = stoi(s1);
        int n2 = stoi(s2);
        dbg(n1, n2);
        return n1 - n2;
    };
    for (int i = 0; i < k; i++) {
        n = f(n);
    }
    cout << n << '\n';
    return 0;
}

