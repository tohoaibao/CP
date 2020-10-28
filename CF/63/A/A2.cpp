/**
 * File              : A2.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 16:23:08
 * Last Modified Date: 12.10.2020 16:32:50
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

struct sss {
    int idx, val;
    string s;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<sss> A(n);
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        A[i].idx = i;
        A[i].s = a;
        if (b == "rat") A[i].val = 0;
        else if (b == "woman" || b == "child") A[i].val = 1;
        else if (b == "man") A[i].val = 2;
        else A[i].val = 3;
    }
    sort(all(A), [&](const auto &o1, const auto &o2){
        if (o1.val == o2.val) {
            return o1.idx < o2.idx;
        }
        return o1.val < o2.val;
    });
    for (auto &a : A) {
        cout << a.s << endl;
    }
    return 0;
}

