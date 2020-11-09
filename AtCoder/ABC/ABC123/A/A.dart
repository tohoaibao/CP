import 'dart:io';
import 'dart:math';

void main() {
    int mx = 0, mn = 123;
    for (int i = 0; i < 5; i++) {
        int x = int.parse(stdin.readLineSync());
        mx = max(mx, x);
        mn = min(mn, x);
    }
    int k = int.parse(stdin.readLineSync());
    if (mx - mn > k) {
        print(":(");
    } else {
        print("Yay!");
    }
}
