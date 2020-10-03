//https://www.codechef.com/MAY20B/status/CORUS,kumarankit01
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    long n=sc.nextLong();
		    long q=sc.nextLong();
		    sc.nextLine();
		    String s=sc.nextLine();
		     int a[]=new int[26];
		        for(int i=0;i<s.length();i++){
		            a[(int)s.charAt(i)-97]++;
		        }
		    while(q-->0){
		        long c=sc.nextLong();
		       
		        int sum=0;
		        for(int i=0;i<26;i++){
		            if(a[i]>c){
		                sum+=(a[i]-c);
		            }
		        }
		        System.out.println(sum);
		    }
		}
	}
}
