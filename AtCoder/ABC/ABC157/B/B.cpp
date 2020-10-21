/**
 * File              : B.cpp
 * Author            : Bao To Hoai
 * Date              : 21.10.2020 10:44:33
 * Last Modified Date: 21.10.2020 11:59:15
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

bool check(vector<vector<bool>> &B){
    // check first diagonal
    bool ok = true;
    for (int i = 0; i < 3; i++) {
        if (!B[i][i]) ok = false;
    }
    if (ok) return true;

    // check second diagonal
    ok = true;
    for (int i = 0; i < 3; i++) {
        if (!B[i][2 - i]) ok = false;
    }
    if (ok) return true;
    
    // check row
    for (int i = 0; i < 3; i++) {
        ok = true;
        for (int j = 0; j < 3; j++) {
            if (!B[i][j]) ok = false;
        }
        if (ok) return true;
    }
    
    //check column
    for (int i = 0; i < 3; i++) {
        ok = true;
        for (int j = 0; j < 3; j++) {
            if (!B[j][i]) ok = false;
        }
        if (ok) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> A(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }
    int n;
    cin >> n;
    vector<vector<bool>> B(3, vector<bool>(3));
    while (n--) {
        int x;
        cin >> x;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (A[i][j] == x) {
                    B[i][j] = true;
                }
            }
        }
    }
    cout << (check(B) ? "Yes" : "No") << '\n';
    return 0;
}

