package URI_Problems_solution;

import java.util.Scanner;

public class URI_1099 {

	public static void main(String[] args) {

		int N;
		int interval_start,interval_end;
		/**
									7
							4 5				0
							13 10			11	
							6 4				5
							3 3				0
							3 5				0
							3 4				0
							3 8				12

		 */
		Scanner input =new Scanner(System.in);
		
		N =input.nextInt();
		for (int i = 1; i <= N; i++) {
			int total_odd = 0;
			interval_start = input.nextInt();
			interval_end = input.nextInt();
			if (interval_start > interval_end) {
				for (int j = interval_start-1; j > interval_end; j--) {
					if (j % 2 != 0) {

						total_odd+=j;
					}
				}
			}else if(interval_start < interval_end){
				for (int j = interval_start + 1; j < interval_end; j++) {
					if (j % 2 != 0) {

						total_odd+=j;
					}
					}
				
				}else {
					total_odd = 0;
				}

			System.out.print(total_odd+"\n");
		}
		
		

	}
  }

