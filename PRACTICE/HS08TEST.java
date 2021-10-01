import java.util.Locale;
import java.util.Scanner;

class Atm {
    public static void main(String args[]) {
	Scanner sc = new Scanner(System.in).useLocale(Locale.US);
	int withdraw = sc.nextInt();
	double balance = sc.nextDouble();
	
	if(withdraw % 5 == 0 && (balance - (withdraw + 0.50)) > 0) {
	    balance -= (withdraw + 0.50);
	}
	
	System.out.println(balance);
    }
}
