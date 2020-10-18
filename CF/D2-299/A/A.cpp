/**
 * File              : A.cpp
 * Author            : Bao To Hoai
 * Date              : 18.10.2020 19:00:14
 * Last Modified Date: 18.10.2020 20:02:15
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
void solve(int n) {
    vector<string> A = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen"};
    if (n <= 13) {
        cout << A[n] << "\n";
    } else if (n == 15) {
        cout << "fifteen\n";
    } else if (n == 18) {
        cout << "eighteen\n";
    } else if (n == 50) {
        cout << "fifty\n";
    } else if (n == 20) {
        cout << "twenty\n";
    } else if (n == 30) {
        cout << "thirty\n";
    } else if (n == 40) {
        cout << "forty\n";
    } else if (n == 80) {
        cout << "eighty\n";
    } else if (n % 10 == 0) {
        cout << A[n / 10] + "ty\n";
    } else if (n / 10 == 1) {
        cout << A[n % 10] + "teen\n";
    } else {
        if (n / 10 == 5) {
            cout <<"fifty-" + A[n % 10] << "\n";
        } else if (n / 10 == 2) {
            cout <<"twenty-" + A[n % 10] << "\n";
        } else if (n / 10 == 3) {
           cout <<"thirty-" + A[n % 10] << "\n";
        } else if (n / 10 == 4) {
           cout <<"forty-" + A[n % 10] << "\n";
        } else if (n / 10 == 8) {
           cout <<"eighty-" + A[n % 10] << "\n";
        } else {
            cout << A[n / 10] + "ty-" + A[n % 10] << "\n";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}

