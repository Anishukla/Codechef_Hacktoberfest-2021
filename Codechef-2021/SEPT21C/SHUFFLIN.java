/*
Link to the problem:
https://www.codechef.com/SEPT21C/problems/SHUFFLIN
Link to my profile:
https://www.codechef.com/users/ashishm_18
*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = 0;
        if (sc.hasNext()) {
            t = sc.nextInt();
        }
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int ae=0,ao=0;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                if(a[i]%2==0){
                    ae++;
                }
                else {
                    ao++;
                }
            }
            int odd=n/2;
            int even=n/2;
            if(n%2==1){
                odd++;
            }
            System.out.println(Math.min(odd,ae)+Math.min(even,ao));
        }
    }
}
