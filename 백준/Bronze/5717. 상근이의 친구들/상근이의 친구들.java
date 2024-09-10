import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
        
		Scanner sc = new Scanner(System.in);
        
		while (true) {
			int n1 = sc.nextInt();
			int n2 = sc.nextInt();
			if (n1 == 0 && n2 == 0) {
				break;
			}
			System.out.println(n1 + n2);
		}
		
	}

}