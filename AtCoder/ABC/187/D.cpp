/**
 * File              : D.cpp
 * Author            : Bao To Hoai
 * Date              : 18.02.2021 15:10:33 UTC+7
 * Last Modified Date: 18.02.2021 15:37:36 UTC+7
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
    vector<pair<ll, ll>> A(n);
    ll sum1 = 0;
    for (auto &a : A) {
        cin >> a.first >> a.second;
        sum1 += a.first;
    }
    sort(all(A), [&](auto o1, auto o2){
        ll s1 = 2*o1.first + o1.second;
        ll s2 = 2*o2.first + o2.second;
        return s1 > s2;    
    });
    
    ll sum2 = 0, ans = 0;
    for (auto a : A) {
        sum2 += (a.first + a.second);
        sum1 -= a.first;
        ans++;
        dbg(sum1, sum2);
        if (sum2 > sum1) break;
    }
    cout << ans << '\n';
    return 0;
}

