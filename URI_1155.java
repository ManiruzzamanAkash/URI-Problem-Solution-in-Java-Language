package URI_Problems_solution;

public class URI_1155 {

	public static void main(String[] args) {
		//S = 1 + 1/2 + 1/3 + … + 1/100
		float S = 0;
		for (float i = 1; i <= 100; i++) {
			S += (1 / i);
		}
		System.out.printf("%.2f\n",S);
	}
}
