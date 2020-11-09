/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 20:25:28 UTC+7
 * Last Modified Date: 03.11.2020 21:01:20 UTC+7
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
    vector<int> A(5);
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    sort(all(A), [&](int o1, int o2){
        return o1 % 10 < o2 % 10;
    });
    int last = 0;
    for (int i = 0; i < 5; i++) {
        if (A[i] % 10 != 0) {
            last = i;
            break;
        }
    }
    int ans = A[last];
    for (int i = 0; i < 5; i++) {
        if (i != last) {
            if (A[i] % 10 == 0) ans += A[i];
            else ans += A[i] + 10 - A[i] % 10;
        }
    }
    cout << ans << '\n';
    return 0;
}

