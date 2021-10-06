import java.util.Scanner;
import java.lang.Math;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int nums[][] = new int[t][2];
		double fr = 0;
		
		for(int i = 0; i < t; i++) {
			nums[i][0] = sc.nextInt();
			nums[i][1] = sc.nextInt();
			
			// System.out.println(nums[i][0] % nums[i][1]);
			fr = ((double) nums[i][0] / (double) nums[i][1]);
			fr -= Math.floor(fr);
			System.out.println(Math.round(fr * nums[i][1]));
		}
	}
}
