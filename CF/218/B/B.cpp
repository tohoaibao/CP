/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 29.10.2020 10:10:50
 * Last Modified Date: 29.10.2020 11:06:06
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
    int n, m;
    cin >> n >> m;
    vector<int> A(m);
    priority_queue<int> q;
    for (int i = 0; i < m; i++) {
        cin >> A[i];
        q.push(A[i]);
    }
    sort(all(A));
    int left = 0, ans2 = 0;
    for (int i = 0; i < n;) {
        if (A[left] > 0) {
            i++;
            ans2 += A[left];
            --A[left];
        } else {
            left++;
        }
    }
    int ans1 = 0;
    for (int i = 0; i < n;) {
        int v = q.top();
        if (v > 0) {
            i++;
            ans1 += v;
            q.pop();
            q.push(v - 1);
        }
    }
    cout << ans1 << " " << ans2 << '\n';
    return 0;
}

