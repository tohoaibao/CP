/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 11:21:21 UTC+7
 * Last Modified Date: 02.11.2020 12:05:53 UTC+7
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
    vector<int> cnt(101);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    priority_queue<int> q;
    for (int i = 1; i <= 100; i++) {
        if (cnt[i] > 0) {
            q.push(cnt[i]);
        }
    }
    int ans = 0;
    while (!q.empty()) {
        int x1 = q.top();
        q.pop();
        if (x1 >= 4) {
            ans++;
            if (x1 - 4 >= 2) {
                q.push(x1 - 4);
            }
        } else if (x1 >= 2) {
            if (q.empty()) break;
            int x2 = q.top();
            q.pop();
            if (x2 >= 2) ans++;
            if (x2 - 2 >= 2) {
                q.push(x2 - 2);
            }
        } else break;
    }
    cout << ans << '\n';
    return 0;
}

