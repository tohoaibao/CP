/**
 * File              : C.cpp
 * Author            : Bao To Hoai
 * Date              : 26.10.2020 10:07:37
 * Last Modified Date: 26.10.2020 10:40:39
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

template<typename T>
class custom_priority_queue : public priority_queue<T, vector<T>> {
    public:
        bool remove(const T& value) {
            auto it = find(this->c.begin(), this->c.end(), value);
            if (it != this->c.end()) {
                this->c.erase(it);
                make_heap(this->c.begin(), this->c.end(), this->comp);
                return true;
            }
            return false;
        }
};

// TLE
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    custom_priority_queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        q.push(A[i]);
    }
    for (int i = 0; i < n; i++) {
        q.remove(A[i]);
        cout << q.top() << '\n';
        q.push(A[i]);
    }
    return 0;
}

