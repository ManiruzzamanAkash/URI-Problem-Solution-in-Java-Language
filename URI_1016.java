import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		
		int d;

		Scanner sc = new Scanner(System.in);
		d = sc.nextInt();

		int t = (int) (d / ((90 / 60.0) - (60 / 60.0)));

		System.out.printf("%d minutos\n", t);
	}

}
