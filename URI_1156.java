package URI_Problems_solution;
//S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

public class URI_1156 {

	public static void main(String[] args) {
		float S = 1, i, j;
		
		for (i = 3,j = 2;  i <= 39; i+=2,j *= 2) {
			S += i / j;
		}
		
		System.out.printf("%.2f\n",S);

	}

}
