/**
 * File              : A1.cpp
 * Author            : Bao To Hoai
 * Date              : 19.10.2020 16:10:07
 * Last Modified Date: 19.10.2020 16:14:04
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(all(A));
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (k < A[i].first) break;
        ans.push_back(A[i].second + 1);
        k -= A[i].first;
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < sz(ans); i++) {
        if (i > 0) cout << " ";
        cout << ans[i];
    }
    return 0;
}

