package URI_Problems_solution;
/**
						  5	
						1 1 1
						1 2 2
						2 4 8
						2 5 9
						3 9 27
						3 10 28
						4 16 64
						4 17 65
						5 25 125
						5 26 126

 */
import java.util.Scanner;

public class URI_1144 {

	public static void main(String[] args) {
		int N;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			for (int j = i, k = (j* i), l = (k * j);j == i ;j++) {
				System.out.print(j+" "+k+" "+l+"\n");
				System.out.print(j+" "+(k+1)+" "+(l+1)+"\n");
			}
		}

	}

}
/*
import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		int N;
		Scanner input =new Scanner(System.in);
		N = input.nextInt();
		for (int i = 1; i <= N; i++) {
			for (int j = i, k = (j* i), l = (k * j);j == i ;j++) {
				System.out.print(j+" "+k+" "+l+"\n");
				System.out.print(j+" "+(k+1)+" "+(l+1)+"\n");
			}
		}
	}
}

*/
