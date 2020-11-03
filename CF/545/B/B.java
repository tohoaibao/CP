/**
 * File              : B.java
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 10:50:19 UTC+7
 * Last Modified Date: 03.11.2020 11:01:03 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class B {

    public static void main(String[] args) {
        FastScanner fs = new FastScanner();
        String s1 = fs.next();
        String s2 = fs.next();
        int dist = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != s2.charAt(i)) dist++;
        }
        if (dist % 2 != 0) {
            System.out.println("impossible");
            return;
        }
        boolean f = true;
        StringBuilder ans = new StringBuilder();
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) != s2.charAt(i)) {
                if (f)
                    ans.append(s1.charAt(i));
                else
                    ans.append(s2.charAt(i));
                f = !f;
            } else {
                ans.append(s1.charAt(i));
            }
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
              
        long nextLong() {
            return Long.parseLong(next());
        }
    }
}


