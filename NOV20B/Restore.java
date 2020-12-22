import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static int max=4000000;
    static ArrayList<Integer>v=new ArrayList<>();
    static boolean primes[]=new boolean[max+1];
    public static void generatePrimes()
    {
        
        for(int i=0;i<=max;i++)
        primes[i]=true;
        for(int p=2;p*p<=max;p++)
        {
            if(primes[p]==true)
            {
                for(int i=p*p;i<=max;i+=p)
                primes[i]=false;
            }
        }
        for(int i=2;i<=max;i++)
        {
            if(primes[i]==true)
            v.add(i);
        }
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		generatePrimes();
		while (t-- >0)
		{
		    int n=sc.nextInt();
		    int b[]=new int[n];
		    ArrayList<Integer> a=new ArrayList<>();
		    HashMap<Integer,Integer>m=new HashMap<>();
		    for(int i=0;i<n;i++)
		    {
		        b[i]=sc.nextInt();
		        m.put(b[i],m.getOrDefault(b[i],0)+1);
		    }
		    for(int i=0;i<n;i++)
		    {
		        a.add(v.get(b[i]));
		        m.put(b[i],m.get(b[i])-1);
		    }
		    for(int i:a)
		    System.out.print(i+" ");
		    System.out.println();
		}
	}
}