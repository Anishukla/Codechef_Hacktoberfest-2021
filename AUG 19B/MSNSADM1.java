
/*
Link to the problem:
https://www.codechef.com/AUG19B/problems/MSNSADM1
Link to my profile:
https://www.codechef.com/users/swati_2806
*/
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class MSNSADM1
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner sc=new Scanner(System.in);
        int t,A[],B[],n;
        t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            n=sc.nextInt();
            A=new int[n];
            B=new int[n];
            for(int j=0;j<n;j++)
            {
                A[j]=sc.nextInt();
            }
            for(int l=0;l<n;l++)
            {
                B[l]=sc.nextInt();
            }
            int max=0;
            for(int k=0;k<n;k++)
            {
                int ak=A[k]*20;
                int bk=B[k]*10;
                int tp=ak-bk;
                if(tp<0)
                {
                    tp=0;
                }
                if(tp>max)
                {
                    max=tp;
                }
            }
            System.out.println(max);
        }
	}
}
