import java.lang.*;
import java.io.*;
import java.util.*;

class Main {
    public static void main(String arg[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        String ans[] = new String[t];
        for (int i = 0; i < t; i++) {
            String s = br.readLine();
            StringTokenizer st = new StringTokenizer(s);
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            int e = Integer.parseInt(st.nextToken());
            if(((a+b<=d)&&(c<=e))||((a+c<=d)&&(b<=e))||((c+b<=d)&&(a<=e)))
                ans[i]="YES";
             else
                ans[i] = "NO";
        }
        for (int i = 0; i < t; i++) {
            System.out.println(ans[i]);
        }
    }
}