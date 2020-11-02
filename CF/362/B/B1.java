/**
 * File              : B1.java
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 14:40:56 UTC+7
 * Last Modified Date: 02.11.2020 14:45:58 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;

public class B1 {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        int m = fs.nextInt();
        if (m == 0) {
            System.out.println("YES");
            return;
        }
        int[] A = new int[m];
        for (int i = 0; i < m; i++) {
            A[i] = fs.nextInt();
        }
        Arrays.sort(A);
        if (A[0] == 1 || A[m - 1] == n) {
            System.out.println("NO");
            return;
        }
        for (int i = 0; i < m - 2; i++) {
            if (A[i] + 1 == A[i + 1] && A[i] + 2 == A[i + 2]) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
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


