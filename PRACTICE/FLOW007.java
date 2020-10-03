import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
		int t = sc.nextInt();
		for(int i = 0; i < t; i++) {
			int num = sc.nextInt();
			boolean zero = false;
			String str = Integer.toString(num);
			for(int j = str.length() - 1; j >= 0; j--) {
				if(zero || str.charAt(j) != '0') {
					System.out.print(str.charAt(j));
					if(str.charAt(j) > 0)
						zero = true;
				}
			}
			System.out.println();
		}}
	}
}
