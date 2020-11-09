/**
 * File              : Main.java
 * Author            : Bao To Hoai
 * Date              : 06.11.2020 15:33:22 UTC+7
 * Last Modified Date: 06.11.2020 15:36:20 UTC+7
 * Last Modified By  : Bao To Hoai
 */
import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.BufferedReader;

public class Main {
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
            int t = in.nextInt();
            while (t-- > 0) {
                int low = in.nextInt();
                int high = in.nextInt();
                for (int i = low; i <= high; i++) {
                    if (isPrime(i)) out.println(i);
                }
                out.println();
            }
        }
        private static boolean isPrime(int n) {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) return false;
            }
            return n > 1;
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



