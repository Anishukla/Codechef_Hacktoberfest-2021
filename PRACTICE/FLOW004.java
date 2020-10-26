import java.util.Scanner;
import java.lang.Math;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		for(int i = 0; i < t; i++) {
			 Integer n = sc.nextInt();
			 
			 Integer first = Character.getNumericValue(n.toString().charAt(0));
			 Integer last = Character.getNumericValue(n.toString().charAt(n.toString().length() - 1));
			 System.out.println(first + last);
		}
	}
}
