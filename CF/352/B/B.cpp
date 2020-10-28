/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 13.10.2020 09:52:32
 * Last Modified Date: 13.10.2020 10:28:42
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
    int n;
    cin >> n;
    vector<int> A(n);
    for (int &a : A) {
        cin >> a;
    }
    map<int, pair<int, vector<int>>> map;
    for (int i = 0; i < n; i++) {
        map[A[i]].first++;
        map[A[i]].second.push_back(i);
    }
    string ans;
    int cnt = 0;
    for (auto it : map) {
        vector<int> B = it.second.second;
        if (sz(B) == 1) {
            ans += to_string(it.first) + " 0\n";
            cnt++;
        } else {
            int diff = B[1] - B[0];
            bool flag = true;
            for (int i = 2; i < sz(B); i++) {
                if (B[i] - B[i - 1] != diff) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans += to_string(it.first) + " " + to_string(diff) + "\n"; 
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    cout << ans;

    return 0;
}

