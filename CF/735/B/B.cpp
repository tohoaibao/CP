/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 15:45:39 UTC+7
 * Last Modified Date: 03.11.2020 15:56:23 UTC+7
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
    cout << fixed << setprecision(9);
    int n, n1, n2;
    cin >> n >> n1 >> n2;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    } 
    sort(A.rbegin(), A.rend());
    if (n2 < n1) swap(n1, n2);
    ll sum1 = 0, sum2 = 0;
    int x = n1, y = n2;
    for (int i = 0; i < n; i++) {
        if (x > 0) {
            sum1 += A[i];
            --x;
        } else if (y > 0) {
            sum2 += A[i];
            --y;
        } else break;
    }
    cout << (double)sum1/n1 + (double)sum2/n2 << '\n';
    return 0;
}

