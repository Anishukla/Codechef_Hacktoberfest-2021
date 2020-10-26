import java.util.Scanner;

class Factorial {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int t = sc.nextInt();
	int sum, current;
	
	for(int i = 0; i < t; i++) {
	    sum = 0;
	    current = sc.nextInt();
	    
	    for(int j = 5; j <= current; j *= 5) {
		sum += current / j;
	    }
	    System.out.println(sum);
	}
    }
}
