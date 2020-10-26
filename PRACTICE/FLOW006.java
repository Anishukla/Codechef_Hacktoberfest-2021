import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.Math;

public class Main {
	public static void main(String args[]) {
		try(BufferedReader s = new BufferedReader(new InputStreamReader(System.in))) {
			int t = Integer.parseInt(s.readLine());
			int n = 0;
			int sum;
			
			for(int i = 0; i < t; i++) {
				sum = 0;
				n = Integer.parseInt(s.readLine());
				
				for(int j = 0; j < (Math.log10(n)); j++) {
					sum += Character.getNumericValue((Integer.toString(n).charAt(j)));
				}
				
				System.out.println(sum);
			}
		} catch(IOException e) {
			e.printStackTrace();
		}
	}
}
