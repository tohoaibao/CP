/**
 * File              : B1.java
 * Author            : Bao To Hoai
 * Date              : 03.11.2020 11:08:44 UTC+7
 * Last Modified Date: 03.11.2020 11:17:09 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.BufferedReader;

public class B1 {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        solver.solve(in, out);
        out.close();
    }

    static class Task {
        public void solve(InputReader in, PrintWriter out) {
            String s = in.next();
            String t = in.next();
            char[] s1 = s.toCharArray();
            char[] s2 = t.toCharArray();
            int dist = 0;
            for (int i = 0; i < s.length(); i++) {
                if (s1[i] != s2[i]) dist++;
            }
            if (dist % 2 != 0) {
                out.println("impossible");
                return;
            }
            StringBuilder ans = new StringBuilder();
            boolean f = true;
            for (int i = 0; i < s.length(); i++) {
                if (s1[i] != s2[i]) {
                    if (f) ans.append(s1[i]);
                    else ans.append(s2[i]);
                    f = !f;
                } else {
                    ans.append(s1[i]);
                }
            }
            out.println(ans);
        }
    }

    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;

        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }
    }
}



