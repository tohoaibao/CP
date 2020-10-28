/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 12.10.2020 08:18:21
 * Last Modified Date: 12.10.2020 09:05:52
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
    cout << fixed << setprecision(2);
    int n, t1, t2, k, a, b;
    cin >> n >> t1 >> t2 >> k;
    double kk = (double)(100 - k) / 100.0;
    vector<vector<int>> A(n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        A[i] = {i + 1, a, b};
    }
    sort(all(A), [&](vector<int> o1, vector<int> o2){
        double x = max(o1[1] * t1 * kk + o1[2] * t2, o1[2] * t1 * kk + o1[1] * t2);
        double y = max(o2[1] * t1 * kk + o2[2] * t2, o2[2] * t1 * kk + o2[1] * t2);
        if (x == y) {
            return o1[0] < o2[0];
        }
        return x > y;
    });
    for (vector<int> v : A) {
        cout << v[0] << " " << max(v[1] * t1 * kk + v[2] * t2, v[2] * t1 * kk + v[1] * t2) << endl;
    }    

    return 0;
}

