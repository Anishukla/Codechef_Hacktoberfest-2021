//https://www.codechef.com/MAY20B/status/COVID19,kumarankit01
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
		    int n=sc.nextInt();
		    int a[]=new int[n];
		    int min=n,max=1;
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    int c=1;
		    for(int i=0;i<n-1;i++){
		        if(a[i+1]-a[i]<=2){
		            c++;
		        }
		        else{
		            if(c>max)
		            max=c;
		            if(c<min)
		            min=c;
		            c=1;
		        }
		        if(i==n-2){
		            if(c>max)
		            max=c;
		            if(c<min)
		            min=c;
		        }
		    }
		    System.out.println(min+" "+max);
		}
	}
}
