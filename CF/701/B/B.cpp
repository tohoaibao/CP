/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 09:19:56 UTC+7
 * Last Modified Date: 04.11.2020 09:28:51 UTC+7
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
    ll n, m;
    cin >> n >> m;
    unordered_set<int> st1, st2;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        st1.insert(x);
        st2.insert(y);
        ll a = st1.size();
        ll b = st2.size();
        ll cnt = n * a + n * b - a * b;
        if (i > 0) cout << " ";
        cout << n * n - cnt;
    }
    cout << '\n';
    return 0;
}

