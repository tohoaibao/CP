/**
 * File              : Main.java
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 08:47:55 UTC+7
 * Last Modified Date: 03.11.2020 09:03:05 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.awt.Point;

public class Main {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        while (true) {
            int n = fs.nextInt();
            if (n == 0) break;
            Point[] A = new Point[n];
            for (int i = 0; i < n; i++) {
                int d = fs.nextInt();
                int m = fs.nextInt();
                int y = fs.nextInt();
                int c = fs.nextInt();
                A[i] = new Point(convert(d, m, y), c);
            }
            int ans1 = 0;
            long ans2 = 0;
            for (int i = 1; i < n; i++) {
                if (A[i - 1].x + 1 == A[i].x) {
                    ans1++;
                    ans2 += A[i].y - A[i - 1].y;
                }
            }
            System.out.println(ans1 + " " + ans2);
        }
    }

    public static int convert(int d, int m, int y) {
        int numDays = d;
        for (int i = 1900; i < y; i++) {
            numDays += isLeapYear(i) ? 366 : 365;
        }
        int[] M = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isLeapYear(y)) M[1] = 29;
        for (int i = 1; i < m; i++) {
            numDays += M[i - 1];
        }
        return numDays;
    }

    public static boolean isLeapYear(int y) {
        return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
    }
    
    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
        
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }
        
        int nextInt() {
            return Integer.parseInt(next());
        }
              
        long nextLong() {
            return Long.parseLong(next());
        }
    }
}


