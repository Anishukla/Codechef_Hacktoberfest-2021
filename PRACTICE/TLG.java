import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.lang.Math;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		try(Scanner s = new Scanner(System.in)) {
			int t = s.nextInt();
			int p1 = 0, p2 = 0, maxLead= 0, winner = 1;
			
			for(int i = 0; i < t; i++) {
				p1 += s.nextInt();
				p2 += s.nextInt();
				
				if(Math.abs(p1 - p2) > maxLead) {
					maxLead = Math.abs(p1 - p2);
					
					if(p1 > p2) {
						winner = 1;
					} else winner = 2;
				}
			}
			
			System.out.println(winner + " " + maxLead);
		}
	}
}
