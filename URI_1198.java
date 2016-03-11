package URI_Problems_solution;
/**
				10 12
				10 14
				100 200
				2
				4
				100
 */
import java.util.Scanner;

public class URI_1198 {

	public static void main(String[] args) {
		int pl1, pl2 , difference;
		Scanner sc =new Scanner(System.in);
		int EOF = -1;
		while (((pl1 =sc.nextInt() )!= -1)) {
			pl2 = sc.nextInt();
			if(pl1 > pl2){
				difference = pl1 -pl2;
			}else {
				difference = pl2 - pl1;
			}
			System.out.print(difference+"\n");
		}

	}

}
