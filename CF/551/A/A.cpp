/**
 * File              : D:ProjectGitCPCFD2-307AA.cpp
 * Author            : Bao To Hoai
 * Date              : 09.10.2020 16:54:31
 * Last Modified Date: 10.10.2020 09:43:20
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define EACH(x, a) for (auto& x: a)

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
    vector<int> A(n), I(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        I[i] = i;
    }
    sort(all(I), [&](int o1, int o2){
        return A[o1] > A[o2];
    });

    vector<int> B(n);
    int rank = 1, curr = 1, prev = I[0];
    for (int i : I) {
        if (A[i] == A[prev]) {
            B[i] = curr;
        }
        else {
            B[i] = rank;
            curr = rank;
        }
        prev = i;
        rank++;
    }
    for (int &b : B) {
        cout << b << " ";
    }
    puts("");

    return 0;
}

