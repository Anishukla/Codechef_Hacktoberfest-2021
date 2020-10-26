import java.math.BigInteger;
import java.util.Scanner;

class Factorial {
    public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	int t = sc.nextInt();
	
	for(int i = 0; i < t; i++) {
	    System.out.println(fact(sc.nextInt()));
	}
    }
    
    public static BigInteger fact(int num){
	if (num<=1) return BigInteger.ONE;
	
	return fact(num-1).multiply(BigInteger.valueOf(num));
    }
}
