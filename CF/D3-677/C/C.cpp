/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 21.10.2020 10:01:22
 * Last Modified Date: 21.10.2020 10:32:34
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

// WA
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> A(n);
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            if (A[i] > max1) {
                max2 = max1;
                max1 = A[i];
            } else if (A[i] > max2 && A[i] != max1) {
                max2 = A[i];
            }
        }
        if (max2 == INT_MIN) {
            cout << "-1\n";
        } else {
            dbg(max1, max2);
            for (int i = 0; i < n; i++) {
                if (A[i] == max1) {
                    if ((i - 1 >= 0 && A[i - 1] == max2) || (i + 1 < n && A[i + 1] == max2)) {
                        cout << i + 1 << '\n';
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

