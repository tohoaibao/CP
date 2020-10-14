/**
 * File              : B1.cpp
 * Author            : Bao To Hoai
 * Date              : 14.10.2020 11:15:10
 * Last Modified Date: 14.10.2020 13:13:26
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
    int n, m;
    cin >> n >> m;
    
    const int M = 2*max(n, m) + 1;
    vector<bool> used(M);
    vector<int> need(M);
    queue<int> q;
    used[n] = true;
    q.push(n);
    while (q.size()) {
        int x = q.front();
        q.pop();
        if (x > 0 && !used[x - 1]) {
            used[x - 1] = true;
            need[x - 1] = need[x] + 1;
            q.push(x - 1);
        }
        if (x <= m && !used[2*x]) {
            used[2*x] = true;
            need[2*x] = need[x] + 1;
            q.push(2*x);
        }   
    }
    cout << need[m] << endl;

    return 0;
}

