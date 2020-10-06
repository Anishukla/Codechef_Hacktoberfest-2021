/*
    Link to the problem: 
    https://www.codechef.com/JAN20B/problems/BRKBKS
    Link to my profile:
    https://www.codechef.com/users/niranjantuty
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int testcase=0; testcase<n; testcase++){
    		int[] arr = new int[4];
    		for(int i=0; i<4; i++){
    		    arr[i] = scan.nextInt();
    		}
    		int s = arr[0];
    		int sum = arr[1]+arr[2]+arr[3];
    		if(sum <= s){
    		    System.out.println(1);
    		}
    		else if(s >= arr[1]+arr[2] || s>= arr[2]+arr[3]){
    		   System.out.println(2);
    		}
    		else{
    		    System.out.println(3);
    		}
		}
	}
}