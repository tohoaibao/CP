/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 30.10.2020 15:28:55
 * Last Modified Date: 30.10.2020 15:59:26
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
    vector<bool> isPrime(n);
    vector<bool> check(n);
    for (int i = 2; i < n; i++) {
        if (!check[i]) {
            isPrime[i] = true;
            for (int j = 2; i * j < n; j++) {
                check[i * j] = true;
            }
        }
    }
    for (int i = 2; i <= n/2 + 2; i++) {
        if (isPrime[i] && isPrime[n - i]) {
            cout << i << " " << n - i << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}

