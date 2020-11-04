/**
 * File              : B.java
 * Author            : Bao To Hoai
 * Date              : 04.11.2020 09:32:24 UTC+7
 * Last Modified Date: 04.11.2020 09:38:44 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.BufferedReader;
import java.util.HashSet;

public class B {
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
            int n = in.nextInt();
            int m = in.nextInt();
            HashSet<Integer> hs1 = new HashSet<>();
            HashSet<Integer> hs2 = new HashSet<>();
            for (int i = 0; i < m; i++) {
                int x = in.nextInt();
                int y = in.nextInt();
                hs1.add(x);
                hs2.add(y);
                int a = hs1.size();
                int b = hs2.size();
                long ans = (long)n * n - ((long)n * a + (long)n * b - (long)a * b);
                out.print(ans + " ");
            }
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



