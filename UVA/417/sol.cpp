/**
 * File              : sol.cpp
 * Author            : Bao To Hoai
 * Date              : 10.11.2020 10:55:27 UTC+7
 * Last Modified Date: 10.11.2020 11:25:35 UTC+7
 * Last Modified By  : Bao To Hoai
 */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

struct Point {
    double x, y;
};

struct Rect {
    Point p1, p2;
};

bool isInside(Point &p, Rect &r) {
    return p.x > r.p1.x && p.x < r.p2.x && p.y > r.p2.y && p.y < r.p1.y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<Rect> R;
    vector<Point> P;
    char ch;
    while (true) {
        cin >> ch;
        if (ch == '*') break;
        Point p1, p2;
        cin >> p1.x >> p1.y >> p2.x >> p2.y;
        R.push_back({p1, p2});
    }
    double x, y;
    while (true) {
        cin >> x >> y;
        if (x == 9999.9 && y == 9999.9) break;
        P.push_back({x, y});
    }
    for (int i = 0; i < sz(P); i++) {
        bool flag = true;
        for (int j = 0; j < sz(R); j++) {
            if (isInside(P[i], R[j])) {
                cout << "Point " << i + 1 << " is contained in figure " << j + 1 << '\n';
                flag = false;
            }
        }
        if (flag) {
            cout << "Point " << i + 1 << " is not contained in any figure\n";
        }
    }
    return 0;
}

