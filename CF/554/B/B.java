/**
 * File              : B.java
 * Author            : Bao To Hoai
 * Date              : 02.11.2020 13:27:43 UTC+7
 * Last Modified Date: 02.11.2020 13:35:14 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;
import java.util.HashMap;

public class B {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        int n = fs.nextInt();
        HashMap<String, Integer> mp = new HashMap<>();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            String s = fs.next();
            mp.put(s, mp.getOrDefault(s, 0) + 1);
            ans = Math.max(ans, mp.get(s));
        }
        System.out.println(ans);
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
        
        int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) a[i] = nextInt();
            return a;
        }
        
        long nextLong() {
            return Long.parseLong(next());
        }
    }
}


