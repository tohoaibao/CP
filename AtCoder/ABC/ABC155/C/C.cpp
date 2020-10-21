/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 21.10.2020 14:42:44
 * Last Modified Date: 21.10.2020 15:10:37
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_map<string, int> map;
    string s;
    while (n--) {
        cin >> s;
        map[s]++;
    }
    auto compare = [&](string o1, string o2) {
        int x = map[o1];
        int y = map[o2];
        if (x != y) return x < y;
        return o1 > o2;
    };
    priority_queue<string, vector<string>, decltype(compare)> q(compare);
    int max_v = 0;
    for (auto it : map) {
        q.push(it.first);
        max_v = max(max_v, it.second);
    }
    while (!q.empty() && map[q.top()] == max_v) {
        cout << q.top() << '\n';
        q.pop();
    }
    return 0;
}

