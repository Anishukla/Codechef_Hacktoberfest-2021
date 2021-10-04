import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
  
    static class Reader 
    { 
        final private int BUFFER_SIZE = 1 << 16; 
        private DataInputStream din; 
        private byte[] buffer; 
        private int bufferPointer, bytesRead; 
  
        public Reader() 
        { 
            din = new DataInputStream(System.in); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public Reader(String file_name) throws IOException 
        { 
            din = new DataInputStream(new FileInputStream(file_name)); 
            buffer = new byte[BUFFER_SIZE]; 
            bufferPointer = bytesRead = 0; 
        } 
  
        public String readLine() throws IOException 
        { 
            byte[] buf = new byte[64]; // line length 
            int cnt = 0, c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                    break; 
                buf[cnt++] = (byte) c; 
            } 
            return new String(buf, 0, cnt); 
        } 
        public int nextInt() throws IOException 
        { 
            int ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do
            { 
                ret = ret * 10 + c - '0'; 
            }  while ((c = read()) >= '0' && c <= '9'); 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public long nextLong() throws IOException 
        { 
            long ret = 0; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        public double nextDouble() throws IOException 
        { 
            double ret = 0, div = 1; 
            byte c = read(); 
            while (c <= ' ') 
                c = read(); 
            boolean neg = (c == '-'); 
            if (neg) 
                c = read(); 
  
            do { 
                ret = ret * 10 + c - '0'; 
            } 
            while ((c = read()) >= '0' && c <= '9'); 
  
            if (c == '.') 
            { 
                while ((c = read()) >= '0' && c <= '9') 
                { 
                    ret += (c - '0') / (div *= 10); 
                } 
            } 
  
            if (neg) 
                return -ret; 
            return ret; 
        } 
  
        private void fillBuffer() throws IOException 
        { 
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE); 
            if (bytesRead == -1) 
                buffer[0] = -1; 
        } 
  
        private byte read() throws IOException 
        { 
            if (bufferPointer == bytesRead) 
                fillBuffer(); 
            return buffer[bufferPointer++]; 
        } 
  
        public void close() throws IOException 
        { 
            if (din == null) 
                return; 
            din.close(); 
        } 
    }
  public static void main(String[] args) throws java.lang.Exception
    {
        Reader in = new Reader();
        int t = in.nextInt();
        while (t-->0)
        {
            int n = in.nextInt();
            if (n==1)
            {
                in.nextInt();
                System.out.println(1);
                continue;
            }
            long[] arr = new long[n];
            long sum = 0l;
            long[] fwd = new long[n];
            long[] bwd = new long[n];
            for (int i = 0; i < n; i++)
            {
                arr[i] = in.nextLong();
                sum += arr[i];
            }
            fwd[0] = arr[0];
            bwd[0] = arr[n-1];
            for (int i = 1; i < n; i++)
            {
                fwd[i] = gcd(arr[i], fwd[i-1]);
                bwd[i] = gcd(arr[n-i-1], bwd[i-1]);
            }
            long[] gcdArr = new long[n];
            gcdArr[0] = bwd[n-2];
            gcdArr[n-1] = fwd[n-2];
            for (int i = 1; i < n-1; i++)
            {
                gcdArr[i] = gcd(fwd[i-1], bwd[n-i-2]);
            }
            long min = Long.MAX_VALUE;
            for (int i = 0; i < n; i++)
            {
                min = Math.min((sum - arr[i])/gcdArr[i], min);
            }
            System.out.println(min+1);            
        }
        in.close();
    }
  static long gcd(long a, long b)
    {
        if (a == 0l)
            return b;
        return gcd(b % a, a);
    }
}
