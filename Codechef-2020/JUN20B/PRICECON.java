//link to my solution-https://www.codechef.com/viewsolution/38403554

import java.util.*;
class A
{
    public static void main (String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int T=0,n=0,p=0,k=0,i=0,j=0,lr=0;
        T=sc.nextInt();
        for (j=0;j<T ;j++ )
        {
            n=sc.nextInt();
            k=sc.nextInt();
            for(i=0;i<n;i++)
            {
                p=sc.nextInt();
                if(p>k)
                {
                    lr=lr+p-k;
                 }
            }
            System.out.println(lr);
            lr=0;
            
        }
        
    }
}