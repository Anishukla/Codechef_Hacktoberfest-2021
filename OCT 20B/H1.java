/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
   static char[][] decode(String s)
   {
       char res[][]=new char[3][3];
       res[0][0]=s.charAt(0);res[0][1]=s.charAt(1); res[0][2]=s.charAt(2);
       res[1][0]=s.charAt(3);res[1][1]=s.charAt(4);res[1][2]=s.charAt(5);
       res[2][0]=s.charAt(6);res[2][1]=s.charAt(7);res[2][2]=s.charAt(8);
       return res;
   }
   static String encode(char mat[][])
   {
       String temp="";
       for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
       temp+=mat[i][j];
       return temp;
   }
   static void swap(char mat[][],int nx,int ny,int x,int y)
   {
       char temp=mat[x][y];
       mat[x][y]=mat[nx][ny];
       mat[nx][ny]=temp;
   }
    static void process(String start,HashMap<String,Integer> hmp,int prime[])
    {
        Queue<String> q=new LinkedList<String>();
        q.add(start);
        int next_x[]={0,1};int next_y[]={1,0};
        while(q.isEmpty()==false)
        {
            String front=q.peek();
            q.remove();
            char mat[][]=decode(front);
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    for(int k=0;k<2;k++)
                    {
            int nx=i+next_x[k];int ny=j+next_y[k];
            if(nx<3&&ny<3&&prime[mat[i][j]-'0'+mat[nx][ny]-'0']==1)
            {
            swap(mat,nx,ny,i,j);
            String temp=encode(mat);
            if(hmp.containsKey(temp)==false)
            {
                int dist=hmp.get(front);
                hmp.put(temp,dist+1);
                q.add(temp);
            }
            swap(mat,nx,ny,i,j);
            }
            }
            }
            }
        }
    }
public static void main (String[] args) throws java.lang.Exception
{
// your code goes here
HashMap<String,Integer> hmp=new HashMap<String,Integer>();
int prime[]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0};
String start="123456789";
hmp.put(start,0);
process(start,hmp,prime);
Scanner sc=new Scanner(System.in);
if(sc.hasNext()==false)
return;
int t=sc.nextInt();
while(t-->0)
{
    char mat[][]=new char[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            String x=sc.next();
            mat[i][j]=x.charAt(0);
        }
    }
    String en=encode(mat);
   // System.out.println(en);
    if(hmp.containsKey(en)==true)
    System.out.println(hmp.get(en));
    else
    System.out.println(-1);
}
   
}
}
