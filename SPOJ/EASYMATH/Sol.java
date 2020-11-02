/**
 * File              : Sol.java
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 16:25:14 UTC+7
 * Last Modified Date: 02.11.2020 16:54:54 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// TLE
public class Sol {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int t = fs.nextInt();
        while (t-- > 0) {
            int n = fs.nextInt();
            int m = fs.nextInt();
            int a = fs.nextInt();
            int d = fs.nextInt();
            int[] A = {a, a + d, a + 2*d, a + 3*d, a + 4*d};
            System.out.println(solve(m, A) - solve(n - 1, A));
        }
    }

    public static long solve(int n, int[] A) {
        long res = 0;
        int all = 1 << 5;
        for (int i = 0; i < all; i++) {
            long l = 1;
            int sign = 1;
            for (int j = 0; j < 5; j++) {
                if ((i & (1 << j)) > 0) {
                    sign = -sign;
                    l = lcm(l, A[j]);
                }
            }
            res += sign * (n / l);
        }
        return res;
    }

    public static long lcm(long a, long b) {
        if (a == 0 || b == 0) return 0;
        if (b > a) {
            long tmp = a;
            a = b;
            b = tmp;
        }
        long res = a;
        while (res % b != 0) {
            res += a;
        }
        return res;
    }
    
    /*public static long lcm(long a, long b) {
        return a / (gcd(a, b)) * b;
    }

    public static long gcd(long a, long b) {
        return b != 0 ? gcd(b, a % b) : a;
    }*/
    
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


